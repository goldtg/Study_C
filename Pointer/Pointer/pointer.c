#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//int main(void) {
//	char szBuffer[12] = { "HelloWorld" };
//	char* pszData = NULL;
//
//	pszData = (char*)malloc(sizeof(char) * 12);
//	for (int i = 0; i < 12; i++) {
//		pszData[i] = szBuffer[i];
//	}
//	puts(pszData);
//	free(pszData);
//	return 0;
//}

//코드 결함 찾기
int main(void) {
	char szBuffer[12] = { "HelloWorld" };
	char* pszData = NULL;
	pszData = (char*)malloc(sizeof(char) * 12);
	//아래 코드는 상수 = 상수를 가르키는 잘못된 예제, 카피를 하고 싶다면 깊은 카피 함수 memcpy를 사용해야함
	/*pszData = szBuffer;*/
	pszData = memcpy(pszData, szBuffer, 12);
	puts(pszData);

	//메모리 누수 가능성 높음
	free(pszData);
	return 0;
}
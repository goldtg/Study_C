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
//int main(void) {
//	char szBuffer[12] = { "HelloWorld" };
//	char* pszData = NULL;
//	pszData = (char*)malloc(sizeof(char) * 12);
//	//아래 코드는 동적 할당된 주소에서 szBuffer 주소로 바뀌면서 동적할당 받은 주소를 유실하게 된다, 카피를 하고 싶다면 깊은 카피 함수 memcpy를 사용해야함
//	/*pszData = szBuffer;*/
//	pszData = memcpy(pszData, szBuffer, 12);
//	puts(pszData);
//
//	//메모리 누수 가능성 높음
//	free(pszData);
//	return 0;
//}

//배열 - 포인터 실험
//int main(void) {
//	char szBuffer[32] = { "You are a girl." };
//	printf("%s\n", &szBuffer[4]);
//	printf("%s\n", &*szBuffer);
//	printf("%s\n", szBuffer + 4);
//	printf("%p\n", szBuffer + 4);
//
//	return 0;
//
//}


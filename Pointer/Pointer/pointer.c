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

//MyStrcpy함수 작성
//int MyStrcpy(b, a, c);
//int main(void) {
//	char szBufferSrc[12] = { "TesxString" };
//	char szBufferDst[12] = { 0 };
//
//	MyStrcpy(szBufferDst, sizeof(szBufferDst), szBufferSrc);
//	puts(szBufferDst);
//
//	return 0;
//}
//
//int MyStrcpy(char* b, int a, char* c) {
//	int str_arr[12] = { 0 };
//
//	for (int i = 0; i < a; i++) {
//		b[i] = c[i];
//	}
//
//	return b;
//	//c에 대해서 strlen함수로 먼저 확인을 해보는 과정이 있어야 한다.
//	//c에 크기가 b의 크기보다 큰 경우도 있을텐데 그 경우에 대해서 생각해보는 코드가 없음 -> 오류를 반환
//}

//스택 재귀호출

//void PutData(char* pszParm) {
//	
//	if (*pszParm == '\0') {
//		return;
//	}
//	
//	putchar(*pszParm);
//	PutData(pszParm + 1);
//	
//
//}
//int main(void) {
//
//	PutData("TestData");
//	putchar('\n');
//	return 0;
//}

//재귀함수 변형전
//int GetFactorial(int nParam) {
//	int nResult = 0;
//	if (nParam == 1) return 1;
//	
//	nResult = nParam * GetFactorial(nParam - 1);
//	return nResult;
//
//}
//
//int main(void) {
//	printf("5! == %d\n", GetFactorial(5));
//	return 0;
//}

//재귀함수 반복문 변형

int main(void) {
	int nResult = 1;
	for (int i = 1; i <= 5; i++) {
		
		nResult = nResult * i;
		printf("%d\n", nResult);
		
	}
	return 0;
}
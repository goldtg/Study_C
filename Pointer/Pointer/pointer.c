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

//�ڵ� ���� ã��
//int main(void) {
//	char szBuffer[12] = { "HelloWorld" };
//	char* pszData = NULL;
//	pszData = (char*)malloc(sizeof(char) * 12);
//	//�Ʒ� �ڵ�� ���� �Ҵ�� �ּҿ��� szBuffer �ּҷ� �ٲ�鼭 �����Ҵ� ���� �ּҸ� �����ϰ� �ȴ�, ī�Ǹ� �ϰ� �ʹٸ� ���� ī�� �Լ� memcpy�� ����ؾ���
//	/*pszData = szBuffer;*/
//	pszData = memcpy(pszData, szBuffer, 12);
//	puts(pszData);
//
//	//�޸� ���� ���ɼ� ����
//	free(pszData);
//	return 0;
//}

//�迭 - ������ ����
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

//MyStrcpy�Լ� �ۼ�
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
//	//c�� ���ؼ� strlen�Լ��� ���� Ȯ���� �غ��� ������ �־�� �Ѵ�.
//	//c�� ũ�Ⱑ b�� ũ�⺸�� ū ��쵵 �����ٵ� �� ��쿡 ���ؼ� �����غ��� �ڵ尡 ���� -> ������ ��ȯ
//}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main(void) {
//	int x = 10;
//	int* pnData = &x;
//
//	printf("x: %d\n", x);
//
//	*pnData = 20;
//	printf("x: %d\n",x);
//	return 0;
//}

//�����Ϳ� �迭
//int main(void) {
//	int aList[5] = { 0 };
//	int* pnData = aList; //�� ������ �ٸ� ������ �ּ� �����ڸ� ������� �ʾ����� �迭�� index 0 �ּҷ� �ĺ��Ǳ� ������ 0�� index�� �����
//	//������ + ���� = ����
//	//�迭�� �̸��� �ּһ�� 
//
//	printf("aList[0] : %d\n", aList[0]);
//
//	*pnData = 20;
//	printf("aList[0] : %d\n", aList[0]);
//	return 0;
//}

//int main(void) {
//	char szBuffer[16] = { "Hello" };
//	char* pszData = szBuffer;
//	int nLength = 0;
//
//	while (*pszData !='\0')
//	{
//		pszData++;
//		nLength++;
//	}
//	//char ũ�� ��ŭ�� �̵���
//	//������ �ּҴ� ù ������ �ּҸ� ������ �ֱ� ���� + char(1byte)ũ�⸸ŭ �����̴� ������ length ������ 5�� ���� 
//
//	printf("Length : %d\n", nLength);
//	printf("Length : %d\n", strlen(szBuffer));
//	printf("Length : %d\n", strlen("World"));
//	return 0;
//}
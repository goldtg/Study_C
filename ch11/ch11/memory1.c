#include <stdio.h>
#include <stdlib.h>

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
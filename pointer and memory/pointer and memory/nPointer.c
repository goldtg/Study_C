#include <stdio.h>
//malloc(), calloc() �Լ��� ���� ��� ����
#include <stdlib.h>
//memset() �Լ��� ���� ��� ����
#include <string.h>

//int main(void) {
//	int* pList = NULL, i = 0;
//	pList = (int*)malloc(sizeof(int) * 3);
//	pList[0] = 10;
//	pList[1] = 20;
//	pList[2] = 30;
//
//	for (i = 0; i < 3; i++) {
//		printf("%d\n", pList[i]);
//	}
//	free(pList);
//	return 0;
//}
//malloc�� �⺻������void �Լ� �̱� ������ 6�࿡�� (int*)�� ���������ν� ���� ����ȯ�� �����Ѵ�.
//void�� ���̵� �ؼ� ����� ���ٴ� �ǹ̰� �ȴ�.

int main(void) {
	int* pList = NULL, * pNewList = NULL;

	int aList[3] = { 0 };

	pList = (*int)malloc(sizeof(int) * 3);
	memset(pList, 0, sizeof(int) * 3); //memset���� 0�ʱ�ȭ �ϴ� �ڵ�

	pNewList = (*int)calloc(3, sizeof(int)); //calloc���� 0���� �ʱ�ȭ �ϴ� �ڵ�

	free(pList);
	free(pNewList);
	return 0;
}
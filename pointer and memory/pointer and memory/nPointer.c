#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int* pList = NULL, i = 0;
	pList = (int*)malloc(sizeof(int) * 3);
	pList[0] = 10;
	pList[1] = 20;
	pList[2] = 30;

	for (i = 0; i < 3; i++) {
		printf("%d\n", pList[i]);
	}
	free(pList);
	return 0;
}
//malloc�� �⺻������void �Լ� �̱� ������ 6�࿡�� (int*)�� ���������ν� ���� ����ȯ�� �����Ѵ�.
//void�� ���̵� �ؼ� ����� ���ٴ� �ǹ̰� �ȴ�.


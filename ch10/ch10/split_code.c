#include <stdio.h>

int GetData() {
	int aList[3] = { 0 },i=0;
	int nIndex = 0;
	for (i = 0; i < 3; ++i) {
		printf("������ �Է��ϼ���: ");
		scanf_s("%d", &nIndex);
		return nIndex;
	}
}

int GetMax(int one, int two, int three) {
	int nMax = one;

	if (nMax < two){
		nMax = two;
		if (nMax < three)
			nMax = three;
	}
	return nMax;
	}


int PrintData(int a, int b, int c, int d) {
		printf("%d, %d, %d �� ���� ū ���� %d�Դϴ�.", a, b, c, d);
	}

int main(void) {
	int nMax = -9999, i = 0;
	int aList[3] = { 0 };
	//�Է�
	for(i=0;i<3;++i){
	aList[i] = GetData();
	}

	//�ִ� ���
	nMax = GetMax(aList[0], aList[1], aList[2]);

	//���
	PrintData(aList[0], aList[1], aList[2], nMax);
	return 0;
}



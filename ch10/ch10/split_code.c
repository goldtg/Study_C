#include <stdio.h>

int GetData() {
	int aList[3] = { 0 },i=0;
	int nIndex = 0;
	for (i = 0; i < 3; ++i) {
		printf("정수를 입력하세요: ");
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
		printf("%d, %d, %d 중 가장 큰 수는 %d입니다.", a, b, c, d);
	}

int main(void) {
	int nMax = -9999, i = 0;
	int aList[3] = { 0 };
	//입력
	for(i=0;i<3;++i){
	aList[i] = GetData();
	}

	//최댓값 계산
	nMax = GetMax(aList[0], aList[1], aList[2]);

	//출력
	PrintData(aList[0], aList[1], aList[2], nMax);
	return 0;
}



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
//malloc은 기본적으로void 함수 이기 때문에 6행에서 (int*)를 적어줌으로써 강제 형변환을 수행한다.
//void는 길이도 해석 방법도 없다는 의미가 된다.


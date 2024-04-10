#include <stdio.h>
//malloc(), calloc() 함수를 위한 헤더 포함
#include <stdlib.h>
//memset() 함수를 위한 헤더 포함
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
//malloc은 기본적으로void 함수 이기 때문에 6행에서 (int*)를 적어줌으로써 강제 형변환을 수행한다.
//void는 길이도 해석 방법도 없다는 의미가 된다.

int main(void) {
	int* pList = NULL, * pNewList = NULL;

	int aList[3] = { 0 };

	pList = (*int)malloc(sizeof(int) * 3);
	memset(pList, 0, sizeof(int) * 3); //memset으로 0초기화 하는 코드

	pNewList = (*int)calloc(3, sizeof(int)); //calloc으로 0으로 초기화 하는 코드

	free(pList);
	free(pNewList);
	return 0;
}
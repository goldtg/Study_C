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

//포인터와 배열
//int main(void) {
//	int aList[5] = { 0 };
//	int* pnData = aList; //위 예제와 다른 점으로 주소 연산자를 사용하지 않았지만 배열은 index 0 주소로 식별되기 때문에 0번 index가 변경됨
//	//포인터 + 변수 = 변수
//	//배열의 이름은 주소상수 
//
//	printf("aList[0] : %d\n", aList[0]);
//
//	*pnData = 20;
//	printf("aList[0] : %d\n", aList[0]);
//	return 0;
//}
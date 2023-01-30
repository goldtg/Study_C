#include <stdio.h>

//int main(void) {
//	int a = 10;
//	printf("a = %d\n", a);
//	a = a + 1;
//	a++;
//	printf("a = %d\n", a);
//	a++;
//	printf("a = %d\n", a);
//	return 0;
//
//}

//int main(void) {
//	int b = 20;
//	printf("b = %d\n", ++b);
//	printf("b = %d\n", b++);
//	printf("b = %d\n", b);
//
//
//}
//예시정리

//int main(void) {
//	for (int i = 1; i <= 10; i++) {
//		printf("Hello World %d\n", i);
//
//	}
//	return 0;
//
//}

//int main(void) {
//	int i = 1;
//	while (i <=10)
//	{
//		printf("Hello World %d\n", i++);
//	}
//	return 0;
//} //while문 예시


//int main(void) {
//	int i = 1;
//	do {
//		printf("Hello World %d\n", i++);
//	} while (i <= 10);
//	return 0;
//}// do while 문 예시

//이중반복문

//int main(void) {
//	for (int i = 1; i <= 3; i++) {
//		printf("First Sentense: %d\n", i);
//		for (int j = 1; j <= 5; j++) {
//			printf("Second Sentense: %d\n", j);
//		}
//
//	}
//	return 0;
//}

//int main(void) {
//	for (int i = 2; i < 10; i++) {
//		for (int j = 1; j < 10; j++) {
//			printf("%d x %d = %d\n", i, j, i * j);
//		}
//	}
//	return 0;
//} //구구단 만들기

//int main(void) {
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j <= i; j++) {
//			printf("*");
//		}
//		printf("\n");
//		
//	}
//	return 0;
//}//피라미드
// 피라미드는 원리를 한 줄씩 볼 것을 추천함

//int main(void) {
//	for (int i = 0; i < 5; i++) {
//		for (int j = i; j <= 4-1; j++) {
//			printf("S");//공백출력 printf(" ")
//		}
//		for (int k = 0; k <= i; k++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//}//표를 그려볼 것


//int main(void) {
//	int floor;
//
//	printf("몇 층으로 쌓겠습니까?(5~100): ");
//	scanf_s("%d", &floor);
//	
//	for (int i = 0; i < floor; i++) {
//		for (int j = i; j < floor - 1; j++) {
//			printf(" ");
//		}
//		for (int k = 0; k < i*2 + 1; k++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}//project

//int main(void) {
//	for (int i = 5; i > 0; i--) {
//		for (int j = i; j > 0; j--) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

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


int main(void) {
	int i = 1;
	do {
		printf("Hello World %d\n", i++);
	} while (i <= 10);
	return 0;
}
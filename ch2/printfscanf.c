#include <stdio.h>

//int main(void) {
//	float f = 46.5f;
//	printf("%.2f,\n",f);
//	double d = 4.428;
//	printf("%.2lf,\n", d);
//	return 0;
//
//}
//실수형 예제

//int main(void) {
//	float f = 2121.1020f;
//	printf("%.3f,\n", f);
//	return 0;
//}//1분퀴즈 통과

//int main(void) {
//	const YEAR = 2023;
//	printf("This year : %d\n", YEAR);
//	return 0;
//} 변경할 수 없는 변수 즉, 상수 예제

//int main(void) {
//	printf("%d X %d = %d\n", 30, 79, 30 * 79);
//	return 0;
//
//} //printf 사용 예제


//#include는 지시문이다. 지정한 파일을 코드에 포함하라는 뜻이다.
//<stdio>는 standart input output의 줄임말이다. 또한 함수를 포함한 헤더 파일이다. 그래서 확장자 명이 h이다
//<>로 파일을 추가하면 컴파일러가 있는 폴더에서 파일을 찾는다.
//""로 파일을 추가하면 소스파일 폴더에서 파일을 찾는다.

//int main(void) {
//	int input;
//	printf("Let me give your number: ");
//	scanf_s("%d", &input); //&input은 input이 할당받은 메모리 주소를 의미한다.
//	printf("value: %d\n", input);
//	return 0;
//}

//int main(void) {
//	int one, two, three;
//	printf("Plese enter three number: ");
//	scanf_s("%d %d %d", &one, &two, &three);
//	printf("first: %d\n", one);
//	printf("second: %d\n", two);
//	printf("third: %d\n", three);
//	return 0;
//
//} //여러 값을 받고 사용하는 예제

//int main(void) {
//	char c = 'A';
//	printf("%c\n", c);
//	return 0;
//} //문자 받는 예시(문자열 아님)
//문자는 한글자 문자열은 문자를 모아둔 것을 의미한다

//int main(void) {
//	char str[256];
//	scanf_s("%s", str,(unsigned int) sizeof(str));
//	printf("% s\n", str);
//	return 0;
//}//unsigned int는 오류를 해결하기 위해 형변환하는 방법이다. 다른 방법 = 변수 크기 256을 직접 넣는 것

//int main(void) {
//	char str[256];
//	char a[256];
//	scanf_s("%s", str, (unsigned int) sizeof(str));
//	scanf_s("%s", a, (unsigned int)sizeof(a));
//	printf("%s %s\n", str, a);
//	return 0;
//} //문자열 여러개 받기 문제 풀기 통과 22.01.09

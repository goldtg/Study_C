#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//int main(void) {
//	int age = 21;
//	if (age >= 8 && age <= 13) {
//		printf("초등");
//	}
//	else if (age >= 14 && age <= 16) {
//		printf("중등");
//	}
//	else if (age >= 16 && age <=19)
//	{
//		printf("성인");
//	}
//	else {
//		printf("청소년이 아닙니다");
//		
//	}
//	return 0;
//}

//int main(void) {
//	for (int i = 1; i <= 30; i++) {
//		if (i >= 6) {
//			printf("나머지 집 ㄱ");
//			break;//for문 탈출문법 break
//		}
//
//		printf("%d번 학생 준비\n", i);
//	}
//	return 0;
//}

//int main(void) {
//	for (int i = 1; i <= 30; i++) {
//		if (i >= 6 && i <= 10) {
//			if (i == 7) {
//				printf("%d번 학생은 결석입니다\n", i);
//				continue; //break와 다름, 실행 흐름 제어에 break이랑 같이 쓰임
//			}
//			printf("%d번 준비\n", i);
//		}
//		
//	}
//	return 0;
//}

//int main(void) {
//	printf("Before reset\n");
//	for (int i = 0; i < 10; i++) {
//		printf("%d", rand() % 10);
//	}
//	srand(time(NULL));
//	printf("\n\nAfter reset\n");
//	for (int i = 0; i < 20; i++) {
//		printf("%d", rand() % 20);
//	}
//
//	return 0;
//} //난수 초기화 하고 난수 뽑아보기 예제

//int main(void) {
//	srand(time(NULL));
//	int i = rand() % 3;
//	if (i == 0) {
//		printf("가위\n");
//
//	}
//	else if (i == 1) {
//		printf("바위\n");
//	}
//	else if (i == 2) {
//		printf("보\n");
//	}
//	else {
//		printf("모하노");
//	}
//
//	return 0;
//}//if-else if로 가위바위보

//int main(void) {
//	srand(time(NULL));
//	int i = rand() % 3;
//	switch (i) {
//	case 0:
//		printf("가위\n");
//		break;
//	case 1:
//		printf("바위\n");
//		break;
//	case 2:
//		printf("보\n");
//		break;
//	default:
//		printf("모하노");
//	}
//	return 0;
//}// switch문으로 가위바위보 구현해보기

//int main(void) {
//	int age = 21;
//	if (age >= 8 && age <= 13) {
//		printf("초등");
//	}
//	else if (age >= 14 && age <= 16) {
//		printf("중등");
//	}
//	else if (age >= 16 && age <= 19)
//	{
//		printf("성인");
//	}
//	else {
//		printf("청소년이 아닙니다");
//
//	}
//	return 0;
//}

int main(void) {
	srand(time(NULL));
	int age = rand() % 50;
	swtich(age) {
		case(age<10):
			printf("잼민이\n");
			break;
		case(age>=10 && age<=13):
			printf("초등학생\n");
			break;
		default:
			printf("모하노\n");
	}
}
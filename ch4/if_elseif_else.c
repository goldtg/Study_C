#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//int main(void) {
//	int age = 21;
//	if (age >= 8 && age <= 13) {
//		printf("�ʵ�");
//	}
//	else if (age >= 14 && age <= 16) {
//		printf("�ߵ�");
//	}
//	else if (age >= 16 && age <=19)
//	{
//		printf("����");
//	}
//	else {
//		printf("û�ҳ��� �ƴմϴ�");
//		
//	}
//	return 0;
//}

//int main(void) {
//	for (int i = 1; i <= 30; i++) {
//		if (i >= 6) {
//			printf("������ �� ��");
//			break;//for�� Ż�⹮�� break
//		}
//
//		printf("%d�� �л� �غ�\n", i);
//	}
//	return 0;
//}

//int main(void) {
//	for (int i = 1; i <= 30; i++) {
//		if (i >= 6 && i <= 10) {
//			if (i == 7) {
//				printf("%d�� �л��� �Ἦ�Դϴ�\n", i);
//				continue; //break�� �ٸ�, ���� �帧 ��� break�̶� ���� ����
//			}
//			printf("%d�� �غ�\n", i);
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
//} //���� �ʱ�ȭ �ϰ� ���� �̾ƺ��� ����

//int main(void) {
//	srand(time(NULL));
//	int i = rand() % 3;
//	if (i == 0) {
//		printf("����\n");
//
//	}
//	else if (i == 1) {
//		printf("����\n");
//	}
//	else if (i == 2) {
//		printf("��\n");
//	}
//	else {
//		printf("���ϳ�");
//	}
//
//	return 0;
//}//if-else if�� ����������

//int main(void) {
//	srand(time(NULL));
//	int i = rand() % 3;
//	switch (i) {
//	case 0:
//		printf("����\n");
//		break;
//	case 1:
//		printf("����\n");
//		break;
//	case 2:
//		printf("��\n");
//		break;
//	default:
//		printf("���ϳ�");
//	}
//	return 0;
//}// switch������ ���������� �����غ���

//int main(void) {
//	int age = 21;
//	if (age >= 8 && age <= 13) {
//		printf("�ʵ�");
//	}
//	else if (age >= 14 && age <= 16) {
//		printf("�ߵ�");
//	}
//	else if (age >= 16 && age <= 19)
//	{
//		printf("����");
//	}
//	else {
//		printf("û�ҳ��� �ƴմϴ�");
//
//	}
//	return 0;
//}

int main(void) {
	srand(time(NULL));
	int age = rand() % 50;
	swtich(age) {
		case(age<10):
			printf("�����\n");
			break;
		case(age>=10 && age<=13):
			printf("�ʵ��л�\n");
			break;
		default:
			printf("���ϳ�\n");
	}
}
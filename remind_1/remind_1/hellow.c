#include <stdio.h>

//int main(void) {
//	printf("Hello World \n");
//	return 0;
//}

//int main(void) {
//	char ch = 0;
//	ch = getchar();
//	putchar(ch);
//	putchar('Z');
//
//	return 0;
//
//}
//gets �� ���ڿ� �Է� �޴°� 
//puts �� ���ڿ� ����ϴ� ��

//int main(void) {
//	char szName[32] = { 0 };
//	printf("�̸��� �Է��ϼ���: ");
//	gets_s(szName, sizeof(szName)); // gets�� ���� ������ ����
//
//	printf("����� �̸���: ");
//	puts(szName);
//	puts("�Դϴ�");
//
//	return 0;
//}

//int main(void) {
//	char szName[32] = { 0 };
//	int nAge = 0;
//
//	printf("���̸� �Է��ϼ���: ");
//	scanf_s("%d%*c", &nAge);
//
//	printf("�̸��� �Է��ϼ���: ");
//	gets_s(szName, sizeof(szName));
//
//	printf("%d�� %s", nAge, szName);
//
//}


//int main(void) {
//
//	int nAge = 0;
//	char szName[32] = { 0 };
//
//	printf("���̸� �Է��ϼ���:");
//	scanf_s("%d%*c", &nAge);
// // ���ۿ� ���� \n�� ������ ���� ���μ����� �����ϴ� �Ϳ� ������ ������ �Ѵ�.
//
//	printf("�̸��� �Է��ϼ���: ");
//	gets_s(szName, sizeof(szName));
//
//	printf("����� ���̴� %d �̰�, �̸��� \'%s\' �Դϴ�.", nAge, szName);
//
//	return 0;
//}

//�ʼ� ����
//int main(void) {
//	int szNum1 = 0;
//	int szNum2 = 0;
//
//	printf("ù ��° ������ �Է����ּ���: ");
//	scanf_s("%d%*c", &szNum1);
//
//	printf("�� ��° ������ �Է����ּ���: ");
//	scanf_s("%d%*c", &szNum2);
//
//	double nMean = (double)szNum1 + (double)szNum2;
//
//	printf("�����: %.2f �Դϴ�.", nMean / 2);
//
//	return 0;
//}

//�ð� ��� ����

//int main(void) {
//	int _time = 0;
//	
//
//	printf("�ð��� �Է����ּ���(���� 4000) : ");
//	scanf_s("%d%*c", &_time);
//
//	int second = (int)_time % 60; //40
//	int minute = (int)_time / 60 % 60; //6
//	int hour = _time / 60 / 60;
//	printf("%d �ð� %02d �� %02d �� �Դϴ�. \n", hour, minute, second);
//	
//
//	return 0;
//}

//�� ��ȯ ����

//int main(void) {
//	int a = 3, b = 4, c = 0;
//
//	printf("a�� �Է����ּ���: ");
//	scanf_s("%d&*c", &a);
//
//	printf("b�� �Է����ּ���: ");
//	scanf_s("%d&*c", &b);
//
//
//	c = a;
//	a = b;
//	b = c;
//	printf("a: %d b: %d", a, b);
//}

//int main(void) {
//	int total = 0, input = 0;
//	scanf_s("%d%*c", &input);
//	total += input;
//
//	scanf_s("%d%*c", &input);
//	total += input;
//
//	scanf_s("%d%*c", &input);
//	total += input;
//
//	printf("%d", total);
//
//	return 0;
//}

// ��Ʈ ������ ����
//int main(void) {
//	int input_1 = 0, input_2 = 0;
//
//	scanf_s("%d%d", &input_1, &input_2);
//
//	printf("%d", input_1 + (~input_2 + 1));
//
//	return 0;
//
//}

//���� ������ �ǽ�

//int main(void) {
//	int nInput = 0;
//	printf("������ �Է����ּ���(0~100): ");
//	scanf_s("%d",&nInput);
//
//	/*int nResult = nInput > 79 ? printf("�հ�") : printf("���հ�");
//	printf(nResult);*/
//
//	printf("%s\n", nInput > 79 ? "�հ�" : "���հ�");
// 
//
//}



// �ִ� �����̹�

//int main(void) {
//	int nInput = 0, nMax = 0;
//	printf("���ڸ� �Է����ּ���: ");
//	scanf_s("%d", &nInput);
//
//	(nInput > nMax) ? (nMax = nInput) : (nMax = nMax);
//
//	printf("���ڸ� �Է����ּ���: ");
//	scanf_s("%d", &nInput);
//
//	(nInput > nMax) ? (nMax = nInput) : (nMax = nMax);
//
//	printf("���ڸ� �Է����ּ���: ");
//	scanf_s("%d", &nInput);
//
//	(nInput > nMax) ? (nMax = nInput) : (nMax = nMax);
//
//	printf("%d", nMax);
//	return 0;
//
//}

//�ִ� ��ʸ�Ʈ

//int main(void) {
//
//	int a = 0, b = 0, c = 0, nMax =0;
//	scanf_s("%d%d%d", &a, &b, &c);
//	nMax = (a > b) ? a : b;
//	nMax = (nMax > c) ? nMax : c;
//
//	printf("%d", nMax);
//
//	return 0;
//
//}

//�ִ� ��
//int main(void) {
//	int input = 0, max =0;
//
//
//	scanf_s("%d", &input);
//	max = input;
//
//	scanf_s("%d", &input);
//	if (input > max) max = input;
//
//	scanf_s("%d", &input);
//	if (input > max) max = input;
//
//	printf("%d", max);
//
//
//}

//int main(void) {
//	int age = 0, fee = 1000, sale = fee - fee * 0.25;
//
//	printf("���̸� �Է����ּ���: ");
//	scanf_s("%d", &age);
//
//	if (age > 20) age = 20;
//	if (age < 20) fee = sale;
//	if (age >= 20) fee = fee;
//
//	printf("����� ���� ����� %d", fee);
//
//}

//int main(void) {
//	int fee = 1000, age = 0;
//
//	printf("���̸� �Է����ּ���: ");
//	scanf_s("%d", &age);
//
//	
//
//	if (age <= 13) {
//		if (age < 4) {
//			fee = 0;
//		}
//		else {
//			fee = fee * 0.5;
//		}
//	}
//	else {
//		if (age < 20) {
//			
//			fee = fee * 0.75;
//		}
//
//		else {
//			fee = fee;
//		}
//	}
//
//	printf("����� ���̴� %d ����� %d", age, fee);
//
//}

//while remind
int main(void) {
	int nInput = 0, user = 0;
	printf("���� �Է�: ");
	scanf_s("%d", &nInput);
	if (nInput < 1) nInput = 1;
	if (nInput > 9) nInput = 9;

	while (user < nInput) {
		putchar('*');
		if (user == nInput - 1) {
			printf("\n");
		}
		user++;
	}

	return 0;
}


















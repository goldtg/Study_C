#include <stdio.h>

//int main(void) {
//	float f = 46.5f;
//	printf("%.2f,\n",f);
//	double d = 4.428;
//	printf("%.2lf,\n", d);
//	return 0;
//
//}
//�Ǽ��� ����

//int main(void) {
//	float f = 2121.1020f;
//	printf("%.3f,\n", f);
//	return 0;
//}//1������ ���

//int main(void) {
//	const YEAR = 2023;
//	printf("This year : %d\n", YEAR);
//	return 0;
//} ������ �� ���� ���� ��, ��� ����

//int main(void) {
//	printf("%d X %d = %d\n", 30, 79, 30 * 79);
//	return 0;
//
//} //printf ��� ����


//#include�� ���ù��̴�. ������ ������ �ڵ忡 �����϶�� ���̴�.
//<stdio>�� standart input output�� ���Ӹ��̴�. ���� �Լ��� ������ ��� �����̴�. �׷��� Ȯ���� ���� h�̴�
//<>�� ������ �߰��ϸ� �����Ϸ��� �ִ� �������� ������ ã�´�.
//""�� ������ �߰��ϸ� �ҽ����� �������� ������ ã�´�.

//int main(void) {
//	int input;
//	printf("Let me give your number: ");
//	scanf_s("%d", &input); //&input�� input�� �Ҵ���� �޸� �ּҸ� �ǹ��Ѵ�.
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
//} //���� ���� �ް� ����ϴ� ����

//int main(void) {
//	char c = 'A';
//	printf("%c\n", c);
//	return 0;
//} //���� �޴� ����(���ڿ� �ƴ�)
//���ڴ� �ѱ��� ���ڿ��� ���ڸ� ��Ƶ� ���� �ǹ��Ѵ�

//int main(void) {
//	char str[256];
//	scanf_s("%s", str,(unsigned int) sizeof(str));
//	printf("% s\n", str);
//	return 0;
//}//unsigned int�� ������ �ذ��ϱ� ���� ����ȯ�ϴ� ����̴�. �ٸ� ��� = ���� ũ�� 256�� ���� �ִ� ��

//int main(void) {
//	char str[256];
//	char a[256];
//	scanf_s("%s", str, (unsigned int) sizeof(str));
//	scanf_s("%s", a, (unsigned int)sizeof(a));
//	printf("%s %s\n", str, a);
//	return 0;
//} //���ڿ� ������ �ޱ� ���� Ǯ�� ��� 22.01.09

#include <stdio.h>

int main(void) {
	int age = 9;
	if (age >= 8 && age <= 13) {
		printf("�ʵ�");
	}
	else if (age >= 14 && age <= 16) {
		printf("�ߵ�");
	}
	else if (age >=16)
	{
		printf("����");
	}
	return 0;
}
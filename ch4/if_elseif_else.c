#include <stdio.h>

int main(void) {
	int age = 9;
	if (age >= 8 && age <= 13) {
		printf("초등");
	}
	else if (age >= 14 && age <= 16) {
		printf("중등");
	}
	else if (age >=16)
	{
		printf("성인");
	}
	return 0;
}
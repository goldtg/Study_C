#include <stdio.h>

int main_scanf(void) {

	char name[256];
	printf("Name : ");
	scanf("%s", name, sizeof(name));

	char id[256];
	printf("ID : ");
	scanf("%s", id, sizeof(id));

	int age;
	printf("Age : ");
	scanf("%d", &age);

	char birth[256];
	printf("생일을 입력하세요: (월일, 예: 0802: ");
	scanf("%s", birth, sizeof(birth));

	int size;
	printf("Shose size: ");
	scanf("%d", &size);

	printf("\n\n---User Information---\n\n");
	printf("name: %s\n", name);
	printf("ID: %s\n", id);
	printf("age: %d\n", age);
	printf("Birth: %s\n", birth);
	printf("Shoes size: %d\n", size);

	return 0;





}
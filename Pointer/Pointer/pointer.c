#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//int main(void) {
//	char szBuffer[12] = { "HelloWorld" };
//	char* pszData = NULL;
//
//	pszData = (char*)malloc(sizeof(char) * 12);
//	for (int i = 0; i < 12; i++) {
//		pszData[i] = szBuffer[i];
//	}
//	puts(pszData);
//	free(pszData);
//	return 0;
//}

//�ڵ� ���� ã��
int main(void) {
	char szBuffer[12] = { "HelloWorld" };
	char* pszData = NULL;
	pszData = (char*)malloc(sizeof(char) * 12);
	//�Ʒ� �ڵ�� ��� = ����� ����Ű�� �߸��� ����, ī�Ǹ� �ϰ� �ʹٸ� ���� ī�� �Լ� memcpy�� ����ؾ���
	/*pszData = szBuffer;*/
	pszData = memcpy(pszData, szBuffer, 12);
	puts(pszData);

	//�޸� ���� ���ɼ� ����
	free(pszData);
	return 0;
}
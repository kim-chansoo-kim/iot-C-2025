#include <stdio.h>
#include <stdlib.h>

int main()
{
	char str[100];
	char* ps;
	int i;

	// ���� - ���ڿ��� 5�� �޾Ƽ� �������� ����
	for (i = 0; i < 5; i++)
	{
		printf("���ڿ��� �Է��ϼ���>> ");
		gets(str);
		//printf("�Է��� ���ڿ�: %s\n", str);
		/*���ڿ� ����*/
		ps = (char*)malloc(strlen(str) + 1);		// �Էµ� ���ڿ��� ������ ������ ������ ���� �Ҵ� �޴´�.( +1 == �� �ڸ�)
		if (ps == NULL)
		{
			exit(1);
		}
		strcpy(ps, str);							// ���ڿ� ����
		printf("heap: %s\n", ps);

		free(ps);									// ���� �޸� ��ȯ
	}
	printf("�Է¹��� ���ڿ�: %s", ps);

	return 0;
}
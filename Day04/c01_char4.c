#include <stdio.h>
void myStrInput(char* str);

int main()
{
	char str[100];

	myStrInput(str);
	printf("�Է��� ���ڿ�: %s\n", str);

	return 0;
}

void myStrInput(char* str)
{
	char ch;
	int i = 0;
	printf("���ڿ��� �Է��ϼ���(�ִ� 100): ");

	while (i < 99)	// ���� 1.���͸� ġ����, ���� 2.100���� ���� ������ �ݺ�
	{
		ch = getchar();

		// ����('\n')�� �Է��ϸ� ����
		if (ch == '\n')
		{
			break;
		}

		// '#'�� �Է��ϸ� ���� ����
		if (ch == '#')
		{
			printf("\n'#' �Է����� ���� ����!\n");
			break;
		}

		str[i] = ch;
		i++;
	}
	str[i] = '\0'; // null�ڸ� ���� �ֱ�
}

// ����� ����
/*void myStrInput(char* ps, int size)
{
	int i = 0;
	while (1)
	{
		ps[i] = getchar();
		if (ps[i] == '\n' || i >= (size - 1)) break;
		i++;
	}
	ps[i] = '\0';
}*/
/*
	strcmp - ���ڿ� �� �Լ�(���ĺ� ����������)
*/
#include <stdio.h>

int main()
{
	char str[100] = "apple";
	char str2[100] = "orange";

	// str�� �������� ���� ������ -1��ȯ(apple), str2�� ���� ������ 1 ��ȯ(orange), ���� ���ٸ� 0���� ��ȯ
	if (strcmp(str, str2) > 0) printf("%s\n", str);		// 
	else printf("%s\n", str2);							// a�� �۱� ������ orange���
	return 0;
}
/*�迭�� ����*/
#include <stdio.h>

int main()
{
	char str[100] = "banana";
	char str2[10] = "apple";			// char �迭�� ����ô� +1��ŭ�� ���� �ʿ��ϴ�(null�ڸ�)
	char str3[7] = {'o','r','a','n','g','e'};
	char str4[4];		// �ڵ����� null���ڰ� ���� ����
	str4[0] = 'a';
	str4[1] = 'b';
	str4[2] = 'c';	
	str4[3] = '\0'; // null���� ����

	printf("str: %s\n", str);
	printf("str2: %s\n", str2);
	printf("str3: %s\n", str3);
	printf("str3[6]: %s\n", str3[6]);
	printf("str4: %s\n", str4);
	printf("str ������ ��: %s\n", str[10]); // ��� null�� ä����

	//str = str2; // ũ�Ⱑ �޶� ���Կ����� ���� �Ұ���
	strcpy(str, str2);	// ���ڿ� ����
	printf("str: %s\n", str);	// ��½� str2�� ���� 'apple'�� ��µ�

	strcpy(str, "dog");	// ���� �ٲٱ�
	printf("str: %s\n", str);

	str[0] = 'D';	// �ձ��� �ϳ� ������ �ٲٱ� (���ڴ� ''�� ǥ��)
	printf("str: %s\n", str);

	return 0;
}
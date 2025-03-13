/*배열에 저장*/
#include <stdio.h>

int main()
{
	char str[100] = "banana";
	char str2[10] = "apple";			// char 배열에 저장시는 +1만큼의 방이 필요하다(null자리)
	char str3[7] = {'o','r','a','n','g','e'};
	char str4[4];		// 자동으로 null문자가 들어가지 않음
	str4[0] = 'a';
	str4[1] = 'b';
	str4[2] = 'c';	
	str4[3] = '\0'; // null문자 넣음

	printf("str: %s\n", str);
	printf("str2: %s\n", str2);
	printf("str3: %s\n", str3);
	printf("str3[6]: %s\n", str3[6]);
	printf("str4: %s\n", str4);
	printf("str 나머지 방: %s\n", str[10]); // 모두 null로 채워짐

	//str = str2; // 크기가 달라서 대입연산자 실행 불가능
	strcpy(str, str2);	// 문자열 복사
	printf("str: %s\n", str);	// 출력시 str2의 값인 'apple'이 출력됨

	strcpy(str, "dog");	// 문자 바꾸기
	printf("str: %s\n", str);

	str[0] = 'D';	// 앞글자 하나 개별로 바꾸기 (문자는 ''로 표시)
	printf("str: %s\n", str);

	return 0;
}
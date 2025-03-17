/*
	구조체 배열
*/
#include <stdio.h>

// 멤버변수 서언
typedef struct addr
{
	char name[20];
	int age;
	char tel[20];
	char addr[100];
}Addr;

// 

int main()
{
	Addr list[3] =
	{
		{"김찬수", 26, "010-1464-7873", "광양"}
		, {"김철수", 33, "010-2222-2222", "부산"}
		, {"김영희", 24, "010-3333-3333", "울산"}
	};

	for (int i = 0; i < 3; i++)
	{
		printf("%s, %d, %s, %s\n", list[i].name, list[i].age, list[i].tel, list[i].addr); // 0번방에 들어있는 각가값들을 출력
	}

	return 0;
}
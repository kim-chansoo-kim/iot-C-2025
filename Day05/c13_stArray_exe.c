/* 
	스트럭트 배열 예제
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

void print_list(Addr* plist, int size);	// 구조체 리스트를 출력하는 함수

int main()
{
	Addr list[5] =
	{
		  {"이설백", 26, "010-1111-1111", "서울"}
		, {"김철수", 29, "010-2222-2222", "부산"}
		, {"박영희", 24, "010-3333-3333", "울산"}
		, {"서주현", 22, "010-4444-4444", "대전"}
		, {"강백호", 25, "010-5555-5555", "강릉"}
	};

	print_list(list, 5);

	return 0;
}

void print_list(Addr* plist, int size) // 함수에서 변수를 받을때 배열로 받아도 되지만 포인터변수로 받는게 좋음
{
	printf("-----주소록 출력-----\n");
	for (int i = 0; i < size; i++)
	{
		printf("이름    : %s\n", plist[i].name);
		printf("나이    : %d\n", plist[i].age);
		printf("전화번호: %s\n", plist[i].tel);
		printf("주소    : %s\n", plist[i].addr);
		printf("\n");
	}
}
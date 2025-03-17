/*
	struct(구조체) - 사용자 정의 자료형
	기존 자료형을 묶어서 만든 복합 자료형(타입 == 크기)
*/
#include <stdio.h>


struct Human {						// 구조체 선언 - struct 구조체명(Human)
	char name[100];					// 멤버변수 name, age
	int age;
};

int main()
{	/* '.' 멤버 접근 연산자 */
	struct Human h;					// Human구조체의 변수 h 선언
	strcpy(h.name, "김찬수");
	h.age = 26;						// h객체의 멤버 age에 30을 저장한다.

	printf("제 이름은 %s이고 나이는 %d살입니다.\n", h.name, h.age);

	return 0;
}
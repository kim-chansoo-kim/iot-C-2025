/*
	구조체 포인터:
*/
#include <stdio.h>

typedef struct score
{
	int kor;
	int eng;
	int mat;
}Score; // 일반적으로 앞글자만 대문자거나 전체를 대문자로씀

int main()
{
	Score s = { 100, 80, 85 };
	Score* ps = &s;

	printf("국어점수: %d\n", ps->kor);
	printf("영어점수: %d\n", ps->eng);
	printf("수학점수: %d\n", (*ps).mat); // 구조체 포인터(ps)가 가리키는 멤버(mat)의 데이터(85)에 접근 (줄여서 ps->mat)
	return 0;
}
/*
	구조체 변수를 통해서 멤버에 접근하는 방법은? '.' - 멤버접근 연산자
	구조체 포인터를 통해서 멤버에 접근하는 방법은? '->' - 화살표연산자, 애로우 연산자
*/
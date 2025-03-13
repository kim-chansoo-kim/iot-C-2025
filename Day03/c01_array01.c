#include <stdio.h>

int main()
{
	int ary[5] = { 1, 2, 3, 4, 5 };	
	int ary2[] = { 6, 7, 8, 9, 10 };
	int ary3[5];						
	// int ary4[];						

	for (int i = 0; i < 5; i++) {
		printf("ary[%d]: %d\n", i, ary[i]);
		printf("ary2[%d]: %d\n", i, ary2[i]);
	}

	ary[2] = 100;						// ary[2]¸¦ 100À¸·Î ¹Ù²Ş
	printf("ary[2]: %d\n", ary[2]);

	return 0;
}
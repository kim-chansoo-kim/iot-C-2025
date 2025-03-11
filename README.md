# iot-C-2025
IoT 개발자 C언어 리포지토리

## 1일차
### Visual Studio 실행
1. Visual Studio 실행
2. 새프로젝트 만들기 -> 빈 프로젝트 -> 경로 설정 -> 파일생성
3. 솔루션 탐색기 -> 소스파일에서 -> HelloWorld.c 파일생성
- HelloWorld
	```C
	// 기본 형태
	#include <stdio.h> // stdio == 파일이름, .h == 헤더파일
	int main()
	{
		printf("Hello World!!");
		return 0;
	}
	```
- C언어 기초(절차적 언어)
	- main함수는 어딜가던 항상 있어야함

- 자료형 출력 - int(정수), double(실수)
	- 정수형 - %d
	- 실수형 - %lf
		- %.4는 소숫점아래 4째자리까지만 출력
	```C
	/*출력*/
	#include <stdio.h>

	int main()
	{
		printf("정수출력: %d\n", 10);		   // 정수출력 %d
		printf("실수출력: %lf\n", 3.14);	   // 실수출력 %lf
		printf("실수출력: %.4lf\n", 3.141592); // %.4는 소숫점아래 4째자리까지만 출력
		printf("%d 그리고 %d\n", 10, 20);	   // 순서대로 %d에 대입
		return 0;
	}

	/* 실수 자료형 */
	#include <stdio.h>

	int main()
	{

		float f = 1.12345678912345;
		double d = 1.12345678912345;

		printf("float: %.15f\n", f);
		printf("double: %.15lf\n", d);

		return 0;
	}
	```
	
- 문자열 출력
	- 문자 - %c - ''로 감싼 문자를 출력
	- 문자열 - %s - ""로 감싼 문자열을 출력
	```C
	/* 문자 */
	#include <stdio.h>
	int main(void)
	{
		printf("%c\n", 'a');		// 문자는 ''로 감싼다
		printf("김찬수\n");			
		printf("%s\n", "김찬수");	// 문자열은 ""로 감싼다

		return 0;
	}
	```

- 변수 선언
	- 대입 연산자를 사용해 변수 선언
		- 변수: 변할수 있는 수
	```C
	/* 변수 선언 */
	#include <stdio.h>

	int main()
	{
		int c;				// 자료형 변수명
		c = 10;
		int num2 = 10;		// 변수의 초기화 (변수를 만들면서 값을 넣음)
		char ch = 'A';		// 문자타입의 변수 선언

		printf("c의 값: %d\n", c);
		printf("num2의 값: %d\n", num2);
		printf("ch의 값: %c\n", ch);

		return 0;
	}
	```

- 배열
	- 동일한 자료형을 연속적으로 저장할 수 있는 공간
	```C
	/* 배열 */
	#include <stdio.h>

	int main()
	{
		char str[10] = "banana";			// 문자타입 배열선언

		printf("str: %s\n", str);
		printf("str[0]: %c\n", str[0]);		// banana의 0번 인덱스 b가 출력
		printf("str[1]: %c\n", str[1]);
		printf("str[5]: %c\n", str[5]);
		printf("str[6]: %c\n", str[6]);
		printf("str[6]: %s\n", str[6]);		// C언어에서 문자열끝에는 항상 null문자가 온다

		char str2[6] = "apple";
		printf("str: %s\n", str2);
		str2[0] = 'A';
		printf("str2: %s\n", str2);
		//str = str2; 배열은 대입연산 불가능

		return 0;
	}
	/* 정수형 배열 */
	#include <stdio.h>

	int main()
	{
		int ary[5] = { 1, 2, 3, 4, 5 };			// 정수형 배열선언 및 값을 지정 // 정수형 배열은 null자리가 필요 없음

		printf("ary[0]: %d\n", ary[0]);			// 인덱스 0번자리의 1출력
		ary[3] = 400;
		printf("ary[3]: %d\n", ary[3]);

		for(int i = 0; i < 5; i++){
			printf("ary[%d]: %d\n", i, ary[i]);
		}
		return 0;
	}
	```

- scanf()
	- 입력받은 값을 출력
	```C
	/* 입력 - scanf() */
	#define _CRT_SECURE_NO_WARNINGS
	#include <stdio.h>

	int main()
	{
		int inputVal;
		printf("정수를 입력하세요: ");
		scanf_s("%d", &inputVal);							// &주소연산자, scanf()에는 다른 어떤 문자열도 들어갈 수 없다

		printf("입력한 정수는 %d 입니다.\n", inputVal);

		int n1, n2;
		printf("두개의 정수를 입력하세요");
		scanf_s("%d %d", &n1, &n2);

		printf("입력한 정수는 %d 와 %d 입니다.\n", n1, n2);
		return 0;
	}
	```

	- scanf를 활용한 나이와 이름 출력
	```C
	#include <stdio.h>

	int main()
	{
		int age = 0;
		char str[20];

		printf("나이를 입력하세요: ");
		scanf_s("%d", &age);
	
		printf("이름을 입력하세요: ");
		scanf_s("%19s", str, (unsigned int)sizeof(str));

		printf("입력한 나이: %d\n입력한 이름: %s", age, str);
		return 0;
	}
	```
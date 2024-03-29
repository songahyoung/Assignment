#include <stdio.h>


// 지역 변수, 전역 변수
// 변수 -
// 지역 변수 - 지역 공간안에서만 사용할 수 있는 변수.
// 전역 변수 - 전역적으로 모든 지역에서 접근할 수 있는 변수.


// 반복문
// 함수 -> 포인터


// 지역변수, 전역변수
int g_Number = 10;

// 1. For문을 사용하여 30를 100번 반복해서 더하는 반복문을 작성해주세요.
// 30 = 0 + 30
// 60 = 30 + 30
// 90 = 60 + 30
// 120 = 90 +30


// 2. While문을 이용하여 
/* 
조건 i = 1000; 

i가 음수가 될때까지
33 씩 감소를 시키는 반복문을 작성해주세요.

음수가 되면 정지.
*/

// 3. 이중 반복문
/*
구구단을 출력하는 이중 반복문을 작성해주세요.

1 * 1 = 1
1 * 2 = 2
.
.
.
.
.
.
1 * 9 = 9

2 * 1 = 2
2 * 2 = 4
..
.
.
.
.
.
.
.
2 * 9 = 18

3 * 1 = 3
.
.
.
.
.
.
.


9 * 1 = 9
.
.
.
.
.
.
.
9 * 9 = 81
*/



int Study0()
{
	// A
	int a = 10;

	g_Number = 10;

	{
		int b = 10;
		// B
		g_Number = 10;
	}

	{
		// b
		g_Number = 10;
	}


	return 0;

}

// 반복문
// 반복적으로 같은 명령을 수행할 수 있는 문법.
// for()
// while()
int main00()
{
	int sum = 0;

	// i 가 하나 증가
	// i = i + 1; == i++;

	for (int i = 0; i < 100; i++)
	{
		sum = sum + i;

		printf("i : %d || %d + %d \n", i, sum, i);
	}


	int i = 0;
	while (i < 100)
	{
		sum = sum + i;

		printf("i : %d || %d + %d \n", i, sum, i);

		i++;
	}
	printf("Sum : %d\n", sum);





	return 0;
}


/*
@@@@@@
@@@@@@
@@@@@@
@@@@@@
@@@@@@
@@@@@@
@@@@@@
@@@@@@
@@@@@@
@@@@@@
*/

int main0100()
{
	for (int a = 1; a < 10; a++) // 무한 루프
	{
		printf("@@@@@@\n");
	}
	// 1부터 10까지 출력하는 반복문을 작성해주세요.



	return 0;
}


int main0003()
{
	for (int a = 1; a <= 10; a++) // 무한 루프
	{
		printf("%d\n", a);
	}


	// 1부터 10까지 출력하는 반복문을 작성해주세요.



	return 0;
}


int main1231()
{
	int i = 0;


	while (i < 10)
	{
		printf("%d\n", i);


		i = i + 1;
	}


	return 0;
}

int ma0in()
{
	// 10부터 0까지 반목문을 이용해서 출력해주세요.

	int i = 10;

	while (i >= 0)
	{

		printf("%d\n", i);

		i = i - 1;

	}


	// @
	// @@
	// @@@
	// @@@@
	// @@@@@
	// @@@@@@
	// @@@@@@@

	// 나름대로 분석하고 공부하고 
	for (int j = 1; j < 10; j++)
	{
		for (int k = 0; k < j; k++)
		{
			printf("@");
		}
		printf("\n");
	}




	return 0;

}



//숙제 1
int main1()
{


		for (int a = 0;a <= 100;a++)
		{
			printf("%d=%d+30\n",(a+1)*30, a*30);

			 
		}

	
	return 0;
}



//숙제2

int main2()
{
	int i = 1000;


	while (i > 0)
	{
		printf("%d\n", i);


		i = i -33;
	}


	return 0;
}

//숙제3

int main()
{
	
	for (int b = 1; b < 10;b++)
	{
		for (int a = 1; a < 10; a++)

		{
			printf("%d * %d = %d \n", b,a, a *b);

		}
	}

	return 0;
}
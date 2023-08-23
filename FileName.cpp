#include <stdio.h>

// c 언어에는 string 없습니다.

// 출력 - printf

// 입력

// float 자료형을 저장하는 변수를 선언하고
// scanf_s 통해 값을 입력하고
// float 변수의 값을 출력하는 프로그램을 만들어주세요. 
// float %f
// 문자열의 서식 지정자 %s
// 문자 입력 출력

// 배열 - 

// 1. 여러가지 자료형에 대해 입력 및 출력을 하는 간단한 예제를 작성하기.
// ex) 인적사항 적던 것 내용 더 추가할 것.
/*
*

--------------- 입력 ---------------
이름 :
나이 :
전화번호 :
주소 :
몸무게 :
--------------- 출력 ---------------
이름 : 신성현
나이 : 27
전화번호 : 01045095095
주소 : 대한민국
몸무게 : 72.1000

*/
// 2.  +, -, *, /, ==, !=, ||, &&, >, <, <= , >=
// 각 연산자를 모두 사용해보기.
// 인터넷에 C언어 연산자가 무엇이 있는지 검색해보기
/*
	계산기 만들기.

	 +, -, *, /

	 char 연산자 - 문자

	--------------- 입력 ---------------
	숫자 A 입력 : 10
	숫자 B 입력 : 20
	연산자 입력 : +

	--------------- 출력 ---------------

	10 + 20 = 30
*/



int study0()
{

	// // ! 포인터 ! // //
	// 한글은 조금 프로그래밍에서 특별한 글자라서 1글자가 2개의 자리
	char name[10];

	int age;

	printf("인적사항을 관리하는 프로그램\n");

	printf("이름 : ");

	scanf_s("%s", name, sizeof(name));

	printf("나이 : ");

	scanf_s("%d", &age);

	printf("내 이름은 %s 이고 나이는 %d 야.", name, age);



	return 0;

}



// 지금은 (2023) 년 8월 23일이야.
// 나는 (송아영) 이야.

int study1()
{
	int year;

	char name[10];

	scanf_s("%d", &year);

	printf("%d", year);

	scanf_s("%s", name, sizeof(name));

	printf("%s \n", name);

	printf("지금은 %d년 8월 23일이야.\n 나는 %s이야.", year, name);

	return 0;

}

// 연산자
// 연산자란?
// +, -, *, /, ==, !=, ||, &&, >, <, <= , >=
// 각 연산자를 모두 사용해보기.
// 인터넷에 C언어 연산자가 무엇이 있는지 검색해보기

int study()
{
	int a = 10;
	int b = 20;

	int c = a + b;

	printf("%d", c);

	return 0;
}



// 조건문
// if 예제
int study3()
{
	int a = 100;

	// 비교 연산자
	// 좌측 우측 값이 같으냐?
	if (a == 200) // 같으면
	{
		//여기로
		printf("같습니다.\n");
	}
	else if (a == 300)
	{
		printf("else if 같습니다.\n");
	}
	else if (a == 400)
	{
		printf("else if 같습니다.\n");
	}
	else if (a == 500)
	{
		printf("else if 같습니다.\n");
	}
	else
	{
		printf("같지않습니다..\n");
	}

	return 0;
}


// scanf_s 를 통해서 어떤 숫자를 입력을 받고
// 조건문으로 숫자를 판별하여 출력하는 
// 

/* 



음수 0 양수


//
양수일 때

음수일 때

0 과 같을 때
//




*/

// = 대입
// 우측의 값을 왼쪽 변수로 넣어라
// ==
int study4()
{
	int number = 10;
	scanf_s("%d", &number);

	if (number < 0)
	{
		printf("음수\n");
	}
	else if (number == 0)
	{
		printf("0\n");

	}
	else if (number > 0)
	{
		printf("양수\n");

	}

	return 0;
}

int study5()

{
	char name[10];
	int age;
	int number;
	char address[10];
	float weight;

	scanf_s("%s", name, sizeof(name));
	printf("이름:%s", name);
	
	scanf_s("%d", &age);
	printf("나이:%d", age);

	scanf_s("%d", &number);
	printf("전화번호:%d", number);

	scanf_s("%s", address, sizeof(address));
	printf("주소:%s", address);

	scanf_s("%f", &weight);
	printf("몸무게:%.4f", weight);

	return 0;
}


int study6()

{
	char name[10];
	int age;
	int number;
	char address[10];
	float weight;

	scanf_s("%s", name, sizeof(name));
	scanf_s("%d", &age);
	scanf_s("%d", &number);
	scanf_s("%s", address, sizeof(address));
	scanf_s("%f", &weight);

	printf("이름:%s\n나이:%d\n전화번호:%d\n주소:%s\n몸무게:%.4f", name, age, number, address, weight);

	return 0;

}

int main()

{
	int a = 1;
	int b = 3;
	char f = '+';

	scanf_s("%d", &a);
	scanf_s("%c",&f);
	scanf_s("%d", &b);


	if (f == '+')
	{ 
		printf("=%d\n", a+b);
	}

	if (f == '-')
	{
		printf("=%d\n", a-b);
	}

	 if (f == '*')
	{
		printf("=%d\n", a*b);
	}

	if (f == '/')
	{
		printf("=%d\n", a/b);
	}

	return 0;
}



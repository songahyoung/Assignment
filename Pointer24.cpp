#include <stdio.h>


// Main 1 



int main123()
{
	// 5 - Array
	// Students
	// \n
	int score[5];

	for (int i = 0;i < 5;i++)
	{
		printf("학생%d:", i + 1);
		scanf_s("%d", &score[i]);
	}


	for (int i = 0;i < 5;i++)
	{
		printf("학생%d:%d \n", i + 1, score[i]);
	}

	return 0;
}



//if (number >= 50)
//{ printf("학생%d:%d\n",i+1,number)
//}
//0.


// 이름
// 나이도
// 몸무게



int main1()
{

	/*연습문제들
		1. 길이를 입력 받는 프로그램을 작성해주세요.
		길이를 입력을 받을 때는 mm단위로 입력을 받고
		출력을 할 때는 Cm, m, Km 로 변환하여 출력하는 프로그램을 만들어 주세요.
		완료.*/

	float length;
	// 포인터란?
	// 주소를 저장하는 자료형
	// 주소를 표현하는 방법은?
	// 변수 이름에 & 붙인다.

	scanf_s("%f", &length);
	// mm -> input
	// cm -> mm 10
	// m -> cm 100
	// km -> m 1000

	printf("%fcm,%fm,%fkm", length / 10, length / 1000, length / 1000000);


	return 0;
}

int main123213()
{
	//2. 임의의 수를 10개를 입력받고 그 중에서 가장 큰 수와 가장
	//	작은 수를 출력하는 프로그램을 작성해주세요.

	int max = 0;
	int min = 1000;

	for (int i = 0; i < 10;i++)
	{
		int number;

		scanf_s("%d", &number);

		if (max < number)
			max = number;

		if (min > number)
			min = number;
	}
	// !반복!

	printf("max=%d, min=%d", max, min);

	return 0;
}



int main542523()
{
	/*3. 정수 하나를 입력 받아 해당 정수가 짝수인지 홀수인지 구분하는
		프로그램을 작성해주세요.*/
	int number;

	scanf_s("%d", &number);

	// 연산자
	// % - 모듈러
	// 나머지를 하고 남은 나머지 값을 반환하는 연산자입니다.
	// 디버깅
	// 버그를 파악하는 행위
	// 버그의 유래
	// Bug -> 벌레가 한마리 

	int condition = number % 2;


	if (number % 2 == 1)
	{
		printf("홀수");
	}

	if (number % 2 == 0)
	{
		printf("짝수");
	}

	return 0;
}

int main123123()
{
	//5. 0 이하의 수가 입력될 때까지 멈추지 않고 계속 정수를 입력 받고
	//  0 포함
	//  0 이하의 수를 입력하면 입력한 모든 수를 합산한 숫자를 출력해주세요.
	
	int number=10;

	int sum = 0;

	// while문 for문
	
	while (number > 0)
	{
		scanf_s("%d",&number);

		sum = number + sum;
	}

	printf("%d", sum);

	return 0;
}

/*
// 조건문과
// 반복문을 잘활용하시면 됩니다.

4. 10개의 정수를 입력받아 정수의 총합과 평균을
출력하는 프로그램을 작성해주세요.

*/


int main123456()
{

	int number[10];
	float sum = 0;

	for (int i = 0;i < 10;i++)

	{
		scanf_s("%d", &number[i]);

		sum = number[i] + sum;

		
	}

	
	printf("총합 : %f, 평균 : %f", sum, sum / 10);


	return 0;
}


int main55555()
{
	int score[5];


	for (int i = 0;i < 5;i++)
	{
		printf("학생%d:", i + 1);
		scanf_s("%d", &score[i]);

	}


	for (int i = 0;i < 5;i++)
	{
		printf("학생%d: %d\n", i+1, score[i]);
	}


	return 0;

}


int main11111111()
{
	int score[5];


	for (int i = 0;i < 5;i++)
	{
		printf("학생%d:", i + 1);
		scanf_s("%d", &score[i]);

	}


	for (int i = 0;i < 5;i++)
	{
		if (score[i] >= 50)
		{
			printf("학생%d: %d\n", i + 1, score[i]);
		}

	}
	return 0;

}



int main()
{
	int number[10];
	int arr = 0;

	for (int i = 0;i < 10;i++)
	{
		scanf_s("%d", &number[i]);


	}

	for (int i = 0;i < 10;i++)
	{
		if (number[i] > number[i + 1])
		{
			printf("%d\n%d", number[i], number[i + 1]);
		}

	}

	

	return 0;
}



// 반복문도 사용하셔야 합니다!
// 1. scanf를 통해서 int 형 배열 5개에 
// 학생들의 점수를 임의로 입력받고
// printf 를 사용해서 학생들의 점수를 모두 출력해주세요.
// 
// ------ 입력 ---------
// 학생 1 : 80
// 학생 2 : 83
// 학생 3 : 77
// 학생 4 : 10
// 학생 5 : 23
// ------ 출력 ---------
// 학생 1 : 80
// 학생 2 : 83
// 학생 3 : 77
// 학생 4 : 10
// 학생 5 : 23
//
// 반복문과 조건문
// 2. scanf를 통해서 int 형 배열 5개에 
// 학생들의 점수를 임의로 입력받고
// 조건문을 사용하여 50점 이상의 점수만 출력하도록
// 하는 프로그램을 작성해주세요.
// ------ 입력 ---------
// 학생 1 : 80
// 학생 2 : 83
// 학생 3 : 77
// 학생 4 : 10
// 학생 5 : 23
// ------ 출력 ---------
// 학생 1 : 80
// 학생 2 : 83
// 학생 3 : 77







// 심화
// 반복문과 조건문
// 3. scanf를 사용해서 임의의 숫자를 10개를 배열에 입력받고
// 10개의 숫자를 오름차순으로 정렬하여 배열에 저장하고 출력해주세요.
// 
// 이 과제를 하실 때 처음에는 어떻게 하면
// 컴퓨터가 간단한 명령어의 조합으로 숫자를 순서대로 정렬
// 할 수 있을지 생각해보기.
//
// 1. 혼자 생각해보기
// 2. https://www.youtube.com/watch?v=Iv3vgjM8Pv4
// 3. 구글에 검색해서 코드 참고하기
//
// c 언어 버블정렬을 검색해서 참고해주세요.
// 
// ------ 입력 ---------
// 1
// 8
// 7
// 9
// 6
// 5
// 4
// 2
// 3
// ------ 출력 ---------
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// 문제를 해결하기 위한 방법.
// 알고리즘


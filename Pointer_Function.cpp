#include <stdio.h>


// 함수- f(x)
// 어떤 값을 넣을 때 값을 뱉어내는 장치?
// 
// 코드를 분리하기 위한 어떤 장치


// 자료형 - 
// void -> 아무것도 반환하지 않는다. 비어 있다.
//  float
//  int 


//
void PrintHelloWorld()
{

	for (int i = 0; i < 100; i++)
	{
		printf("%d \n", i);
	}

}




// 지역 변수, 전역 변수.
// 지역 변수 -> 안에서만
// 전역 변수 -> 모든 지역에서 쓸 수 있는

// a, b
// 교체를 하는 함수.
// a = b;
// b = a;

// 포인터라는걸 알아야합니다.
// 주소를 저장하는 변수입니다.
// 주소의 자료형.





int main123d()
{
	int a = 0;
	float c;

	int b = 10;

	int* pointerA;
	// 변수는 데이터를 담는 그릇

	pointerA = &a;

	// pointerA == a의 주소 공간을 가지고 있다.

	printf("%d\n", pointerA);
	printf("%d\n", *pointerA);

	//*pointerA = 100;


	//Swap(a, b);








	//printf("a : %p \n", &a);
	//printf("a : %d \n", a);
	//printf("pointerA : %p", pointerA);



	return 0;
}



int main123123()
{
	// ctrl + k + c // 드래그 한 영역 주석 처리
	// ctrl + k + u // 드래그 한 영역 주석 제거

	//int numbera = 10;
	//int numberb = 20;
	//int c=3

	//swap();
	//int* c = &numbera;
	//int* numbera = &numberb;
	//int* numberb = &c;

	//printf("a : %d , b : %d", *numbera, *numberb);

	int numberA = 10;
	int* pA = &numberA;

	// numberA == *pA

	*pA = 100;

	printf("%d", numberA);

	// 1. numberA의 주소를 출력해주세요.
	// 2. numberA의 주소를 저장하는 변수 pA를 만들어 주세요.
	// 3. pA를 통해서 numberA의 값을 100으로 바꾸고 numberA를 출력해주세요.

	return 0;
}



// 기본 과제
// 여러가지 자료형 int, float, char, double의 변수를 a, b, c, d를 선언하고
// pA, pB, pC, pD 각 자료형에 맞는 포인터 변수를 선언하여 주소 값을 저장하기.
// 포인터 변수를 사용하여 주소와 실제 데이터의 값을 출력해보기.
// 변수 a, b, c, d의 주소가 실제 포인터에 저장된 주소와 같은지 확인해보기
// ex) pritnf("%p", &a);
// ex) pritnf("%p", pA);




int main000()
{
	int a = 10;
	float b = 0.2;
	char c = 'R';
	double d = 0.3;

	int* pA = &a;
	float* pB = &b;
	char* pC = &c;
	double* pD = &d;

	printf("%d,%.1f,%c,%.1f\n", *pA, *pB, *pC, *pD);

	printf("%p,%p,%p,%p\n", &a, &b, &c, &d);
	printf("%p,%p,%p,%p\n", pA, pB, pC, pD);

	return 0;
}




// 심화 과제 -> 할 수 있으면 해보기
// 스왑 함수 만들기.

void Swap(int* a, int* b)
{
	int c = 0;

	c = *a;
	*a = *b;
	*b = c;
}


int main()
{
	int numberA = 10;
	int numberB = 20;

	Swap(&numberA, &numberB); // F11


	printf("a : %d , b : %d", numberA, numberB);

	return 0;
}
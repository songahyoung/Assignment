#include <stdio.h>


// �Լ�- f(x)
// � ���� ���� �� ���� ���� ��ġ?
// 
// �ڵ带 �и��ϱ� ���� � ��ġ


// �ڷ��� - 
// void -> �ƹ��͵� ��ȯ���� �ʴ´�. ��� �ִ�.
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




// ���� ����, ���� ����.
// ���� ���� -> �ȿ�����
// ���� ���� -> ��� �������� �� �� �ִ�

// a, b
// ��ü�� �ϴ� �Լ�.
// a = b;
// b = a;

// �����Ͷ�°� �˾ƾ��մϴ�.
// �ּҸ� �����ϴ� �����Դϴ�.
// �ּ��� �ڷ���.





int main123d()
{
	int a = 0;
	float c;

	int b = 10;

	int* pointerA;
	// ������ �����͸� ��� �׸�

	pointerA = &a;

	// pointerA == a�� �ּ� ������ ������ �ִ�.

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
	// ctrl + k + c // �巡�� �� ���� �ּ� ó��
	// ctrl + k + u // �巡�� �� ���� �ּ� ����

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

	// 1. numberA�� �ּҸ� ������ּ���.
	// 2. numberA�� �ּҸ� �����ϴ� ���� pA�� ����� �ּ���.
	// 3. pA�� ���ؼ� numberA�� ���� 100���� �ٲٰ� numberA�� ������ּ���.

	return 0;
}



// �⺻ ����
// �������� �ڷ��� int, float, char, double�� ������ a, b, c, d�� �����ϰ�
// pA, pB, pC, pD �� �ڷ����� �´� ������ ������ �����Ͽ� �ּ� ���� �����ϱ�.
// ������ ������ ����Ͽ� �ּҿ� ���� �������� ���� ����غ���.
// ���� a, b, c, d�� �ּҰ� ���� �����Ϳ� ����� �ּҿ� ������ Ȯ���غ���
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




// ��ȭ ���� -> �� �� ������ �غ���
// ���� �Լ� �����.

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
#include <stdio.h>

// c ���� string �����ϴ�.

// ��� - printf

// �Է�

// float �ڷ����� �����ϴ� ������ �����ϰ�
// scanf_s ���� ���� �Է��ϰ�
// float ������ ���� ����ϴ� ���α׷��� ������ּ���. 
// float %f
// ���ڿ��� ���� ������ %s
// ���� �Է� ���

// �迭 - 

// 1. �������� �ڷ����� ���� �Է� �� ����� �ϴ� ������ ������ �ۼ��ϱ�.
// ex) �������� ���� �� ���� �� �߰��� ��.
/*
*

--------------- �Է� ---------------
�̸� :
���� :
��ȭ��ȣ :
�ּ� :
������ :
--------------- ��� ---------------
�̸� : �ż���
���� : 27
��ȭ��ȣ : 01045095095
�ּ� : ���ѹα�
������ : 72.1000

*/
// 2.  +, -, *, /, ==, !=, ||, &&, >, <, <= , >=
// �� �����ڸ� ��� ����غ���.
// ���ͳݿ� C��� �����ڰ� ������ �ִ��� �˻��غ���
/*
	���� �����.

	 +, -, *, /

	 char ������ - ����

	--------------- �Է� ---------------
	���� A �Է� : 10
	���� B �Է� : 20
	������ �Է� : +

	--------------- ��� ---------------

	10 + 20 = 30
*/



int study0()
{

	// // ! ������ ! // //
	// �ѱ��� ���� ���α׷��ֿ��� Ư���� ���ڶ� 1���ڰ� 2���� �ڸ�
	char name[10];

	int age;

	printf("���������� �����ϴ� ���α׷�\n");

	printf("�̸� : ");

	scanf_s("%s", name, sizeof(name));

	printf("���� : ");

	scanf_s("%d", &age);

	printf("�� �̸��� %s �̰� ���̴� %d ��.", name, age);



	return 0;

}



// ������ (2023) �� 8�� 23���̾�.
// ���� (�۾ƿ�) �̾�.

int study1()
{
	int year;

	char name[10];

	scanf_s("%d", &year);

	printf("%d", year);

	scanf_s("%s", name, sizeof(name));

	printf("%s \n", name);

	printf("������ %d�� 8�� 23���̾�.\n ���� %s�̾�.", year, name);

	return 0;

}

// ������
// �����ڶ�?
// +, -, *, /, ==, !=, ||, &&, >, <, <= , >=
// �� �����ڸ� ��� ����غ���.
// ���ͳݿ� C��� �����ڰ� ������ �ִ��� �˻��غ���

int study()
{
	int a = 10;
	int b = 20;

	int c = a + b;

	printf("%d", c);

	return 0;
}



// ���ǹ�
// if ����
int study3()
{
	int a = 100;

	// �� ������
	// ���� ���� ���� ������?
	if (a == 200) // ������
	{
		//�����
		printf("�����ϴ�.\n");
	}
	else if (a == 300)
	{
		printf("else if �����ϴ�.\n");
	}
	else if (a == 400)
	{
		printf("else if �����ϴ�.\n");
	}
	else if (a == 500)
	{
		printf("else if �����ϴ�.\n");
	}
	else
	{
		printf("�����ʽ��ϴ�..\n");
	}

	return 0;
}


// scanf_s �� ���ؼ� � ���ڸ� �Է��� �ް�
// ���ǹ����� ���ڸ� �Ǻ��Ͽ� ����ϴ� 
// 

/* 



���� 0 ���


//
����� ��

������ ��

0 �� ���� ��
//




*/

// = ����
// ������ ���� ���� ������ �־��
// ==
int study4()
{
	int number = 10;
	scanf_s("%d", &number);

	if (number < 0)
	{
		printf("����\n");
	}
	else if (number == 0)
	{
		printf("0\n");

	}
	else if (number > 0)
	{
		printf("���\n");

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
	printf("�̸�:%s", name);
	
	scanf_s("%d", &age);
	printf("����:%d", age);

	scanf_s("%d", &number);
	printf("��ȭ��ȣ:%d", number);

	scanf_s("%s", address, sizeof(address));
	printf("�ּ�:%s", address);

	scanf_s("%f", &weight);
	printf("������:%.4f", weight);

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

	printf("�̸�:%s\n����:%d\n��ȭ��ȣ:%d\n�ּ�:%s\n������:%.4f", name, age, number, address, weight);

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



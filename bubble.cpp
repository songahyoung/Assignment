#include <stdio.h>
#include <random>


//����ü ����


struct student
{
	char name[10];
	int age;
	int score;

};

int main00()
{

	struct student stu[10];

	for (int i = 0;i < 3; i++)
	{

		printf("�л� % d\n", i + 1);

		printf("�̸�: ");
		scanf_s("%s", stu[i + 1].name, sizeof(stu[i + 1].name));

		printf("����:");
		scanf_s("%d", &stu[i + 1].age);

		printf("����:");
		scanf_s("%d", &stu[i + 1].score);

	}

	for (int i = 0;i < 3; i++)
	{
		printf("[�л�%d]\n�̸�:%s\n����:%d\n����:%d\n", i + 1, stu[i + 1].name, stu[i + 1].age, stu[i + 1].score);

	}


	return 0;
}

//����������

int user;
int computer;

int main555()
{
	srand((unsigned int)std::time(NULL));



	while (1)
	{

		printf("������������ �մϴ�.������ 0 / ������ 1 / ���� 2\n");
		scanf_s("%d", &user);


		computer = rand() % 3;

		if (computer == 0)
			printf("��ǻ�Ͱ� ������ �½��ϴ�.\n\n");

		else if (computer == 1)
			printf("��ǻ�Ͱ� ������ �½��ϴ�.\n\n");

		else if (computer == 2)
			printf("��ǻ�Ͱ� ���� �½��ϴ�.\n\n");

		printf("------------------------\n�����\n------------------------\n");



		if (user == computer)
		{
			printf("�����ϴ�\n\n\n");

			continue;
		}


		else
		{
			break;
		}

	}

	int result = (user + 2) % 3;

	if (result == computer)
	{
		printf("�̰���ϴ�");
	}

	else
	{
		printf("�����ϴ�");
	}


	return 0;
}


//�������� ����������10�� ������������ ���ĵǰ� �ϱ�.


int main()
{

	int number[10];
	int what;
	scanf_s("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d", &number[10]);	


	for (int j = 0;j < 10;j++)
	{

		for (int i = 0;i < 10;i++)
		{
			if (number[i] > number[i + 1])
			{
				what = number[i];
				number[i] = number[i + 1];
				number[i + 1] = what;

			}
			
		
		}


		//����for���� ��� ��� �Ǵ��� �𸣰ھ��....���η� �ݺ��ؾߵ��� �ƴµ�..��


	}
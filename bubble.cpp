#include <stdio.h>
#include <random>


//구조체 문제


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

		printf("학생 % d\n", i + 1);

		printf("이름: ");
		scanf_s("%s", stu[i + 1].name, sizeof(stu[i + 1].name));

		printf("나이:");
		scanf_s("%d", &stu[i + 1].age);

		printf("성적:");
		scanf_s("%d", &stu[i + 1].score);

	}

	for (int i = 0;i < 3; i++)
	{
		printf("[학생%d]\n이름:%s\n나이:%d\n성적:%d\n", i + 1, stu[i + 1].name, stu[i + 1].age, stu[i + 1].score);

	}


	return 0;
}

//가위바위보

int user;
int computer;

int main555()
{
	srand((unsigned int)std::time(NULL));



	while (1)
	{

		printf("가위바위보를 합니다.가위는 0 / 바위는 1 / 보는 2\n");
		scanf_s("%d", &user);


		computer = rand() % 3;

		if (computer == 0)
			printf("컴퓨터가 가위를 냈습니다.\n\n");

		else if (computer == 1)
			printf("컴퓨터가 바위를 냈습니다.\n\n");

		else if (computer == 2)
			printf("컴퓨터가 보를 냈습니다.\n\n");

		printf("------------------------\n결과는\n------------------------\n");



		if (user == computer)
		{
			printf("비겼습니다\n\n\n");

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
		printf("이겼습니다");
	}

	else
	{
		printf("졌습니다");
	}


	return 0;
}


//버블정렬 무작위숫자10개 오름차순으로 정렬되게 하기.


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


		//이중for문을 어떻게 써야 되는지 모르겠어요....세로로 반복해야됨은 아는데..ㅜ


	}
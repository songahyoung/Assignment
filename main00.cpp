#include <stdio.h>
#include <random>

int main()
{
	srand((unsigned int)std::time(NULL));
	// 컴퓨터한테 시드를 넘겨주는 함수.

	int user;

	printf("가위바위보를 합니다.가위는 0 / 바위는 1 / 보는 2\n");
	scanf_s("% d", &user);

	// 경우의 3가지
	int computer = rand() % 3;
	


	if (computer <= user)
	{
		printf("졌습니다");
	}

	else if (computer >= user)
	{
		printf("이겼습니다");
	}

	else
	{
		printf("다시하세요");
	}

	while(computer != user)



	return 0;
}
//	printf
// scanf_s


	// 0 가위
	// 1 바위
	// 2 보자기

	// scanf_s

	// 5년
	// 10년
	// 1년 5분 
	// 보정 값
	// 시드입니다!
	// 지금 8시 59분에 실행시키는것과
	// 9시

	// 컴퓨터가 처음 만들어진 이후로 지난 시간을 
	// 
	// rand
	// 프로그램이 시작되고
	// 지난 시간에 따라 값이 나오는 함수입니다.

	// 1 초 50
	// 2 초 60
	// 3 초 1234
	// 4 초 782

	// 그러면 진짜 랜덤이 아니라 정해진 변칙전인 값이 나오는 함수 일뿐이다.
	// 진짜 랜덤은 어떻게 만드는가?

	// 시드!
	// 




	//printf("%d \n", test);

	// 0~30000


// 구조체


// 지역변수
// 전역변수
// 매개변수
// 멤버변수

// 여러개의 변수 묶어서 관리할 수 있는 자료형!

// 학생의 이름 몸무게 나이 성적


// 학생 3명은 배열로 관리해주세요.
// 학생 3명 정도의 정보를 For문을 통해서 입력받는 프로그램을 작성해주세요.
struct student
{ 
	char name[10];
	int age;
	int score;

};

int main00045()
{
  	struct student stu [3];

	for (int i = 0;i < 3; i++)
	{
		printf("student %d\n", i + 1);
		printf("이름: ");
		scanf_s("%s\n", &stu[i].name,sizeof(&stu[i].name));

		printf("나이:");
		scanf_s("%d\n", &stu[i].age);

		printf("성적:");
		scanf_s("%d\n", &stu[i].score);

	}

	for (int i = 0;i < 3; i++)
	{
		printf("[학생%d]\n이름:%s\n나이:%d\n성적:%d", i + 1, stu[i].name, stu[i].age, stu[i].score);

	}


	return 0;
}
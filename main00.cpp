#include <stdio.h>
#include <random>

int main()
{
	srand((unsigned int)std::time(NULL));
	// ��ǻ������ �õ带 �Ѱ��ִ� �Լ�.

	int user;

	printf("������������ �մϴ�.������ 0 / ������ 1 / ���� 2\n");
	scanf_s("% d", &user);

	// ����� 3����
	int computer = rand() % 3;
	


	if (computer <= user)
	{
		printf("�����ϴ�");
	}

	else if (computer >= user)
	{
		printf("�̰���ϴ�");
	}

	else
	{
		printf("�ٽ��ϼ���");
	}

	while(computer != user)



	return 0;
}
//	printf
// scanf_s


	// 0 ����
	// 1 ����
	// 2 ���ڱ�

	// scanf_s

	// 5��
	// 10��
	// 1�� 5�� 
	// ���� ��
	// �õ��Դϴ�!
	// ���� 8�� 59�п� �����Ű�°Ͱ�
	// 9��

	// ��ǻ�Ͱ� ó�� ������� ���ķ� ���� �ð��� 
	// 
	// rand
	// ���α׷��� ���۵ǰ�
	// ���� �ð��� ���� ���� ������ �Լ��Դϴ�.

	// 1 �� 50
	// 2 �� 60
	// 3 �� 1234
	// 4 �� 782

	// �׷��� ��¥ ������ �ƴ϶� ������ ��Ģ���� ���� ������ �Լ� �ϻ��̴�.
	// ��¥ ������ ��� ����°�?

	// �õ�!
	// 




	//printf("%d \n", test);

	// 0~30000


// ����ü


// ��������
// ��������
// �Ű�����
// �������

// �������� ���� ��� ������ �� �ִ� �ڷ���!

// �л��� �̸� ������ ���� ����


// �л� 3���� �迭�� �������ּ���.
// �л� 3�� ������ ������ For���� ���ؼ� �Է¹޴� ���α׷��� �ۼ����ּ���.
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
		printf("�̸�: ");
		scanf_s("%s\n", &stu[i].name,sizeof(&stu[i].name));

		printf("����:");
		scanf_s("%d\n", &stu[i].age);

		printf("����:");
		scanf_s("%d\n", &stu[i].score);

	}

	for (int i = 0;i < 3; i++)
	{
		printf("[�л�%d]\n�̸�:%s\n����:%d\n����:%d", i + 1, stu[i].name, stu[i].age, stu[i].score);

	}


	return 0;
}
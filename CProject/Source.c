#include <stdio.h>

int main()
{
#pragma region ��� ���� ������
	// ������ ������ ����� �����Ͽ�, ������ ������ ����Ű�� �ִ� �ּҿ� �����ϴ� ���� ������ �� ������ �����ϴ� ���ȭ
	// const char *
	/*
	int data = 100;
	int data1 = 20;
	const int* ptr = &data; // 4 Byte �������ϴ� �� const(���ȭ)

	printf("ptr ������ �� : %p\n", ptr);

	// *ptr = 300; (������ ���� �������� ���ȭ�� �Ǿ��� ������ ���� �߻�

	ptr = &data1; // ������(����Ű�°�)�ϴ°� ���ȭ�߱� ������ ptr��(�ּҰ�) ���� ���� / �������ؼ� �� ������ �Ұ���
	printf("ptr ������ �� : %p\n", ptr); // ptr�� ����
	*/
#pragma endregion

#pragma region ������ ���
	// ����� ������ �������̹Ƿ�, �ش� ������ ���� ������ �� ������, ����(value1)�� �ּ� ���� ����ų �� ����
	// value1�� �ּҿ� ���� ���� �����ϰ�, value2�� �ּ������� �� ���� �Ұ���
	/*
	int value1 = 30;
	int value2 = 60;
	
	int* const ptr1 = &value1;
	
	printf("value1�� �� : %d\n", value1);

	*ptr1 = 99999; // (O)

	// ptr1 = &value2; (Error) <= value2�� �ּҰ� �� ����.

	printf("value1�� �� : %d\n", value1);
	*/
#pragma endregion

#pragma region sizeof(�ڷ���)
	/*
	float health = 66.5f;
	short* pointer = NULL;

	printf("char�� ũ�� : %d\n", sizeof(char));
	printf("short�� ũ�� : %d\n", sizeof(short));
	printf("int�� ũ�� : %d\n", sizeof(int));
	printf("long�� ũ�� : %d\n", sizeof(long));

	printf("float�� ũ�� : %d\n", sizeof(health));
	printf("double�� ũ�� : %d\n", sizeof(double));
	printf("long double�� ũ�� : %d\n", sizeof(long double));

	printf("Pointer�� ũ�� : %d\n", sizeof(pointer));
	*/
#pragma endregion

#pragma region ������
	/*
	for (int i = 2; i <= 9; i++)
	{
		printf("<%d��>\n", i);
		for (int j = 1; j <= 9; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
	*/
#pragma endregion

#pragma region scanf(�Է� �Լ�)
	// ǥ�� �Է� �Լ���, ���� ������ �����͸� �پ��� ���Ŀ� ���߾� �Է����ִ� �Լ�

	// scanf <- SDL �˻� ������ ���ϰ� ����ϰ� �Ǹ� Error �߽�

	// scanf_s("�Է��� ������ ����", &����) / & -> ������ �ּ� ��
	/*
	int count = 0;

	printf("count ������ ���� �Է����ּ��� : ");
	scanf_s("%d", &count);

	// ǥ�� �Է� �Լ��� �Է��� ������ ������ ���� �۾����� �Ѿ �� ����

	printf("count ������ �� : %d", count);
	*/

	// ���� �� ���
	// ���� �Է��� ���� ���� ���� �������� �������ּ���
	// ex ) 3 �Է�
	// ��
	// �١�
	// �١١�

	int num;

	printf("���� �Է� : ");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++) 
	{
		for (int j = 1; j <= i; j++)
		{
			printf("��");
		}
		printf("\n");
	}
#pragma endregion






}
#pragma once

#include <stdio.h>

// �ڵ� ������ �Լ��� �ּ�, ���ͷ� ����
#pragma region ���� ����
	// �Լ� �ܺο��� ����� ������ ���α׷� ��𿡼��� ���� �����ϸ�, ���α׷��� ����Ǿ�߸� �޸𸮿��� �����Ǵ� ����
	// ������ ������ �ʱ�ȭ�� �̷���� ��������, ���� ���� ����(���α׷��� ����� �� �޸𸮿� �ö󰡰� �ǰ�, ���α׷��� ����� �� �޸𸮰� ������)

int globalValue = 5;

#pragma endregion

#pragma region ���� ����
// ���� ������ ���� ������ Ư¡�� �Ѵ� ������ ������, �� ���� �ʱ�ȭ�� �̷����
static int attack;

void Calculator()
{
	// static int value = 1;

	// value += 1;

	// printf("���� ���� value�� �� : %d\n", value);
}
#pragma endregion

void Function()
{
	// int count = 0;

	// count += 1;
	// globalValue += 1;

	// printf("���� ���� count�� �� : %d\n", count);
	// printf("globalValue�� �� : %d\n", globalValue);
}

void main()
{
#pragma region ���� ����
	// '���'{ } ������ ����� ������ ��� �������� ��ȿ�ϸ�, ����� ����Ǹ� �޸𸮿��� ������� ����
	// ���ÿ� ��������, �Ű����� ����

	// A ����
	// int data = 100; // void main( ) �Լ� �ȿ� �ִ� data ����

	// {
	// 	B ����
	// 	int data = 20; // ��� ���� �ִ� ���� ����
	// 	printf("data�� �� : %d\n", data);
	// } // ����� ����Ǹ鼭 ��� ���� int data �޸� ����

	// printf("data�� �� : %d\n", data);

#pragma endregion


	// Function(); // 1
	// Function(); // 1

	// Calculator();
	// Calculator();

	// BSS������ �ʱ�ȭ�� �̷������ ���� ���� ����, ���� ������ ���� <= ���α׷� ũ�⿡ ���Ե��� ���� / BSS������ �����Ϳ����� ������ ���̿� ����
	// printf("���� ���� attack�� �� : %d\n", attack); 

	// �� ������ malloc() <= ���� �޸𸮸� �����ؾ� ��

#pragma region ���� ������
	// �ڷ����� �������� ���� ���·� ��� �ڷ����� ������ �� �ִ� ������
	// ���� �����ʹ� �޸� �ּҿ� �����ؼ� ���� ������ �� ����. ������ �޸𸮿� �����Ϸ��� ���� �����Ͱ� ����Ű�� ������ �ڷ������� �� ��ȯ ���־�� ��

	// char charData = 'X';
	// int intData = 10;
	// float floatData = 5.75f;

	// void* ptr = NULL;

	// ptr = &charData;

	// *ptr = 'M'; <= ����Ű�� Ÿ���� void�̱� ������ �������� �Ұ���
	// *(char*)ptr = 'M'; // ���������� �� ��ȯ
	// printf("ptr�� ����Ű�� �� : %c\n", *(char*)ptr);

	// ptr = &intData;
	// *(int*)ptr = 47; 
	// printf("ptr�� ����Ű�� �� : %d\n", *(int*)ptr);
#pragma endregion

#pragma region ���
	// ����) ���� �Է��� ������ ����� ����ϼ���.
	// 12 -> 1, 2, 3, 4, 6, 12

	// int num;

	// printf("���� �Է� : ");
	// scanf_s("%d", &num);

	// for (int i = 1 ; i <= num ; i++)
	// {
	// 	if (num % i == 0)
	// 	{
	// 		printf("%d ", i);
	// 	}
	// }
#pragma endregion

#pragma region ShortCircuit
	// �� ���꿡�� �� �ǿ����� �� ��� ���ʸ� '��'�̸� ������ �ǿ������� ���� ������ �ʰ� �ٷ� ����� ��� ����

	// &&, || (�� ������)
	// &, | (��Ʈ ������)

	int x = 0;
	int y = 1;

	if (++x == 1 && ++y == 1) {}

	printf("x�� �� : %d, y�� �� : %d\n", x, y);
#pragma endregion
}


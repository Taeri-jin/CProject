#pragma once

#include <stdio.h>

void main()
{
#pragma region �ݺ��� (while)
	// Ư�� ������ ������ �� ������ ����ؼ� �־��� ��ɹ��� �����ϴ� �ݺ���
	/*
	int count = 5;

	while (count) // <- ����
	{
		printf("���� ����...\n");
		count--;
	}
	*/
#pragma endregion

#pragma region continue ��
	// �ش� ���ǹ��� �������� �ʰ�, �ݺ����� �̾ �����ϴ� ���
	/*
	for (int i = 1; i <= 5; i++)
	{
		if (i == 3)
		{
			// continue;
			break; // 3�Ͻ� �ݺ��� Ż��
		}
		printf("%d ", i);
	}
	*/
#pragma endregion

#pragma region �� ��ȯ
	// ���� �ٸ� �ڷ����� ������ �ִ� �������� ������ �̷���� �� ������ �����ߴ� �ڷ����� �ٸ� �ڷ������� ��ȯ�ϴ� ����

	// �Ϲ��� �� ��ȯ : ���� �ٸ� �ڷ������� ������ �̷���� �� �ڷ����� ũ�Ⱑ ū �ڷ������� ��ȯ�Ǵ� ����
	/*
	int integer = 10;
	float decimal = 2.5f;

	// double > float > int > short > char
	float result = integer + decimal; // integer�� �Ϲ������� float �� ��ȯ

	printf("result ������ �� : %f\n", result);

	// ����� �� ��ȯ : ������ �̷������ ���� ����ڰ� ���� �ڷ����� ��ȯ�ϴ� ����

	// ���α׷��ֿ��� ������ ���������� ������ ������ ���ü� ����
	// float �޸� [2.0f] = 5/2  <= �������� �����ص� 2.0�� ����

	int a = 5;
	int b = 2;

	float result1 = (float)a / b; // a�� ����� �� ��ȯ / �Ϲ��� �� ��ȯ�� ���� b�� float�� �ʿ� ����

	printf("result1�� �� : %f\n", result1);
	*/
#pragma endregion

#pragma region �ּ� ������
	/*
	// ������ �ּ� ���� ��ȯ�ϴ� ������(%p, &)
	// ������ �ּ� ���� ����ϰ� �Ǹ� ���� �տ� �ִ� ���� �ּ� ���� �����

	int data = 333;

	// %p : �������� �ּҸ� ����ϴ� ���� ������
	// x64 : 64��Ʈ (������ : 8 Byte)
	// x86 : 32��Ʈ (������ : 4 Byte)
	// ������ �ּҴ� ���α׷��� ������ ������ ��� �ٲ�
	printf("data������ �ּ� : %p\n", &data);
	*/
#pragma endregion

#pragma region ������
	// �޸��� �ּ� ���� ������ �� �ִ� ����
	// ������ ������ ũ��� ������ 64��Ʈ���� 8 Byte
	// ������ �տ� �ڷ����� �����Ʈ�� ������ �������ֱ� ���� ����
	/*
	int box = 100;
	int box1 = 999;

	int * ptr = NULL; // int * ptr = &box; <= ����� ���ÿ� �ʱ�ȭ.

	ptr = &box; // box�� �ּ� ���� ptr�� ����

	// ������ ������ �ڽ��� �޸� ������ ������ ������, ������ ������ ������ �ּҸ� �����ϰ� �Ǹ� �ش� ������ ���� �ּҸ� ����Ŵ
	printf("ptr ������ �� : %p\n", ptr);
	printf("ptr ������ �ּ� �� : %p\n", &ptr);
	printf("box ������ �ּ� �� : %p\n", &box);
	printf("box ������ �� : %d\n", box);

	// ������ ������ �̿��� �������ؼ� ���� �ٲ�
	*ptr = 600;
	printf("box ������ �� : %d\n", box);


	ptr = &box1; // ptr�� box1�� ���� �ּҰ��� �� ����

	*ptr = -999; // ������
	printf("box ������ �� : %d\n", box);
	printf("box1 ������ �� : %d\n", box1);

	double health = 10.5;

	// int ptr1�� 4byte�� �޸� ������ ����
	int* ptr1 = &health;
	printf("ptr1 ������ �� : %p\n", ptr1);

	// ������ ������ �����ϱ� ���� �ּ� ���� ������ ������ �ڷ����� ������ ������ �ڷ����� ��ġ�ؾ� ��
	*ptr1 = 66.75;
	printf("ptr1 ������ ����Ű�� �� : %lf\n", *ptr1); // �����Ⱚx, �߸� ���� ��
	*/
#pragma endregion

}
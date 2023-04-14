#pragma once

#include <stdio.h>

int main() {
#pragma region ���� ������
	/*
	����ϱ� ���� �ڷ����� ������ ���������� �������ִ� ��

	"%c" ���� ( ���� ������ )
	"%d" ���� ( ���� ������ )
	"%f" �Ǽ� ( ���� ������ float )


	char character = 'B';
	int data = 100;
	float decimal = 9.953111111f;

	// printf(data); (x)
	// ���İ� ������ ���°� ��ġ���� ������ ���ϴ� ���� ��µ��� ����
	//printf("character�� �� : %f\n", character); (x)
	printf("character�� �� : %c\n", character);
	printf("data�� �� : %d\n", data);

	// float 4byte ũ���� �Ǽ��� �ڷ����� �Ҽ��� ���� 6�ڸ������� ǥ����
	printf("decimal�� �� : %f\n", decimal);

	// ���� �������� ������ ���ʿ������� ������
	printf("data : %d, decimal : %f", data, decimal);
	*/
#pragma endregion

#pragma region ��Ʈ(bit)
	// �����͸� ��Ÿ���� �ּ��� �����̸�, 0 �Ǵ� 1�� �������� ���� ����� �����ϴ� ����
	// bit�� 8�� ���̸� 1byte�� ��

	/* 10���� -> 2����
	10������ 1�� �ɶ����� ��� 2�� ������ �� ���� ���� ��ġ�� ������ ���� �Ʒ����� ���� ������ ����
	*/

	/* 2���� -> 10����
	*/

	/*
	��Ʈ ������
	��Ʈ ������ ���� ������ �����ϱ� ���� ����ϴ� ������
	*/
	// AND : �� ���� �ǿ����� ��� 1�̸� 1�� ��ȯ�ϴ� ������
	int num1 = 10; // 00001010
	int num2 = 15; // 00001111
	char num3 = 10;
	char num4 = 15;
	char num5 = 129;

	printf("num1�� num2�� AND ������ ��� : %d\n", num1 & num2);

	// OR : �� ���� �ǿ����� �߿� �ϳ��� 1�� �ִٸ� 1�� ��ȯ�ϴ� ������
	printf("num1�� num2�� OR ������ ��� : %d\n", num1 | num2);

	// XOR : �� ���� �ǿ����ڰ� ���� ������ 0�� ��ȯ�ϰ�, ���� �ٸ��� 1�� ��ȯ�ϴ� ������
	printf("num1�� num2�� XOR ������ ��� : %d\n", num1 ^ num2);

	// NOT : ��Ʈ�� ������Ű��(������) ������
	printf("num3�� NOT ������ ��� : %d\n", ~num3); // -128+64+32+16+8+4+2+1
	// ù ��° ��Ʈ�� ��ȣ�� ��Ÿ����, ù ��° ��Ʈ�� 1�� �ִٸ� ���� ���� 0�� �ִٸ� ���

	printf("num5�� �� : %d\n", num5); // -128~127�� ǥ�� ����. �����÷ο� ���� �߻�

#pragma endregion
}
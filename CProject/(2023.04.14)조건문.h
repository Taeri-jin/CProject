#pragma once

#include <stdio.h>

void main() {
#pragma region �����÷ο�
	// Ư���� �ڷ����� ǥ���� �� �ִ� �ִ��� ���� �Ѿ ������ �����ϴ� ����

	// char 1Byte (-128 ~ +127)
	// char data = 128;
	// printf("data�� �� : %d", data);
#pragma endregion

#pragma region ����÷ο�
	// Ư���� �ڷ����� ǥ���� �� �ִ� �ּڰ��� ������ �Ѿ ������ �����ϴ� ����

	// char value = -129;
	// printf("value�� �� : %d", value);
#pragma endregion

#pragma region ���迬����
	// �� ���� �ǿ������� ���� ���Ͽ� �� ����� 0 �Ǵ� 1 �̶�� ������ ��Ÿ���� ������

	// A "<" B : B�� A���� Ŭ ��
	// printf("A < B : %d\n", A < B ); 
	// �����̹Ƿ� 0�� ��µȴ�

	// A ">" B : B�� A���� ���� ��
	// printf("A > B : %d\n", A > B );
	// ���̹Ƿ� 1�� ��µȴ�

	// A "<=" B : B�� A���� ũ�ų� ���� ��
	// printf("A <= B : %d\n", A <= B );
	// �����̹Ƿ� 0�� ��µȴ�

	// A ">=" B : B�� A���� �۰ų� ���� ��
	// printf("A >= B : %d\n", A >= B );
	// ���̹Ƿ� 1�� ��µȴ�

	// A "==" B : A�� B�� ���� ��
	// printf("A == B : %d\n", A == B );
	// �����̹Ƿ� 0�� ��µȴ�

	// A "!=" B : A�� B�� ���� ���� ��
	// printf("A != B : %d\n", A != B );
	// ���̹Ƿ� 1�� ��µȴ�
#pragma endregion

#pragma region ���ǹ�(if~else if~else)
// if�� : � Ư���� ������ ���Ͽ� ������ �´ٸ� ����Ǵ� ��ɹ�

	// ���࿡~ (����)
	/*
	if (15 == 15)
	{
		// ������ "��" �̶�� { }���ο� �ִ� ������ ������
		printf("15�� 15�� ����.\n");
	}
	*/

	// else if �� : if���� ������ Ʋ�� �� else if���� ������ �´ٸ� ����Ǵ� ��ɹ�

	/*
	if (5 < 1)
	{
		printf("if�� ����");
	}
	else if (5 == 5)
	{
		// else if( ) ���� �� ������ �� ����
		printf("else if�� ����");
	}
	*/

	// else �� : if���� else if���� ������ �� Ʋ���� ����Ǵ� ��ɹ�
	/*
	('A' == 'B')
	{
		printf("if��\n");
	}
	else if ('C' == 'D')
	{
		printf("else if��\n");
	}
	else
	{
		printf("else��\n");
	}
	*/
#pragma endregion

#pragma region �� ������
	/*
	// && (AND)
	if ('A' == 'A' && 'A' == 'A')
	{
		printf("AND�� ������ �����մϴ�.\n");
	}

	// || (OR)
	if ('A' == 'A' || 'A' == 'B')
	{
		printf("OR�� ������ �����մϴ�.\n");
	}

	// ! (NOT)
	if (!'A')
	{
		printf("NOT�� ������ �����մϴ�.\n");
	}
	*/
#pragma endregion

#pragma region ��и�
	int x = 0;
	int y = 0;

	if (x > 0 && y > 0)
	{
		printf("�� 1 ��и�\n");
	}
	else if (x < 0 && y > 0)
	{
		printf("�� 2 ��и�\n");
	}
	else if (x < 0 && y < 0)
	{
		printf("�� 3 ��и�\n");
	}
	else if (x > 0 && y < 0)
	{
		printf("�� 4 ��и�\n");
	}
	else if (x == 0 && y < 0 || y > 0) // else if ( x && y == 0 ) / else if ( x != 0 && y == 0 )
	{
		printf("x����\n");
	}
	else if (y == 0 && x < 0 || x > 0) // else if ( x == 0 && y ) / else if ( x == 0 && y != 0 )
	{
		printf("y����\n");
	}
	else
	{
		printf("����\n");
	}
#pragma endregion





}


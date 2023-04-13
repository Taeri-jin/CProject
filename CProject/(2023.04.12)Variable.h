#pragma once
#include <stdio.h> // stdio.h : �⺻ ����� �������

void main() { // <- void main �ϳ��� �����ؾ� ��
#pragma region github
	/*
	Github-�������丮(new) <= ������Ʈ�� �������, commit->push �Ҽ�����

	git
	gitBash
	SourceTree
	Github Desktop : file - options - �α���, clone�������丮
		change : ������Ʈ ������Ʈ ���� �ö��
		history������ ����� ���� Ȯ���� �� ����
		push �� Fetch origin�� github�� ���ε� �Ϸ�
		github���� �ٿ�ε� �� �� �α��� Ȯ�� �� clone���� �ٿ���� �� ���Ͽ��� .sln���� ����
	*/
#pragma endregion

#pragma region ���� 
	// pragma region ���� �ݱ������� ���� �̸��� ��, �ּ��ʼ�
	/*
	������ ?
	�����͸� ������ �� �ִ� �޸� ������ �����Ѵ� ��
	*/

	/*
	�ڷ����̶� ?
	�����͸� �����ϱ� ���� �������� ���¸� �����ִ� ��
	*/

	/*
	�ڷ���
	char : �� ���ڸ� �����ϱ� ���� �ڷ��� (1byte)
	short : ������ �����ϱ� ���� �ڷ��� (2byte)
	int : ������ �����ϱ� ���� �ڷ��� (4byte)
	long : ���� ���� (4byte)
	float : �Ǽ� ���� (4byte)
	double : �Ǽ� ���� (8byte)
	long double : (8~16 byte)
	*/

	// �ڷ��� + ������ �̸� , ;(�����ݷ�) : �� ������ ���� �˷��ִ� ��ȣ
	/*
	char alphabet = 'A'; // ����� ȭ��ǥ�� ���� �ִٸ� ����� ���� ����

	int data = 100;

	float pi = 3.14f; //f�������� double�� ������ ��
	*/
#pragma endregion

	//������ �̸� ��Ģ
	/*
	1. ���� ����� �� ���� ( ex. int int = 100; )
	2. ���ڸ� �����̸����� ����Ҽ� ������ ù��° �ܾ�� ����� �� ���� ( ex. int hp1 = 300;(o), int 1hp = 200;(x) )
	3. ������ �̸��� ��ҹ��ڸ� ������ ( ex. int attack, int ATTACK <= ���� �ٸ� �����̸� �޸𸮸� ���� )
	4. ������ �̸��� ������ ���Ե� �� ���� ( ex. int count Down;(x) )
	5. ������ �̸����� Ư�� ��ȣ�� "$", "_"�� ���� ( ex. int count_Down = 5;(o), int mo$ney = 999;(o)
	*/

	// �� ���� �����ҽ� �ش� ���ο��� alt ������ ������ �巡��

	//printf("�ȳ��ϼ���");

	// �����Ϸ� : ���(10����)�� ��ǻ��(2����) ���̿��� ����
	// ��Ÿ�� : �����߿� ����. �ҽ��ڵ� �м�

#pragma region ������ �ʱ�ȭ
	// ���ʷ� ������ ���� �������ִ� ����
	int exp = 100; // ���� ����
	exp = 999;
#pragma endregion

#pragma region ���
	// ���α׷��� ����Ǵ� ���� �� �̻� ���� ������ �� ���� �޸� ������
	// �� �� ���� �ʱ�ȭ�ϰ� �Ǹ� �� �̻� ���� ������ �� ����

	//const float pi = 3.141592;
	// pi = 6.4571; <= ����� ����Ǿ��� ������ ���� ������ �� ����
	//L-value�� R-value

	/*
	�ɺ������ : �޸� ������ ������ �ִ� ���

	���ͷ� ��� : �޸� ������ �� ������ �ִ� ���. ���� �� �� ��ü ( ex. 3.141592 )
	*/
#pragma endregion

#pragma region ��� ������
	//int result = (10 - 2) * 3;

	int num1;
	int b = 15;
	int c = 50;

	int num2;
	int e = 30;
	const int f = 17;

	int num3;

	int num4;

	int num5;

	// 1. num1 ���� = B ���� + C ����
	num1 = b + c;
	printf("num1 = %d\n", num1);
	// 2. num2 ���� = E ���� + F (�ɺ���)���
	num2 = e + f;
	printf("num2 = %d\n", num2);
	// 3. num3 ���� = ���ͷ� ��� * B ����
	num3 = 17 * b;
	printf("num3 = %d\n", num3);
	// 4. num4 ���� = ���ͷ� ��� / F (�ɺ���)���
	num4 = 17 / f;
	printf("num4 = %d\n", num4);
	// 5. num5 ���� = ���ͷ� ��� + ���ͷ� ���
	num5 = 23 + 27;
	printf("num5 = %d\n", num5);

#pragma endregion
}


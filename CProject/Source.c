#include <stdio.h>

void main()
{
# pragma region switch��
	/*
	// � ����� ���� �� ������� ����Ǵ� ��ɹ�

	int count = 3;

	// switch���� ��� ���ǿ� �ش��ϴ� ���� ���� ������ ��ġ�� �̵�
	// ���������� ���� ����
	switch(count) // <- ��
	{
		// break���̶�?
		// Ư���� �������� �б⸦ Ż���ϴ� ���
		case 0 : printf("0�Դϴ�.\n");
			break;
		case 1 : printf("1�Դϴ�.\n");
			break;
		case 2 : printf("2�Դϴ�.\n");
			break;
		default: printf("�������� ���� �߻��߽��ϴ�.\n");
			break;
	}
	*/
#pragma endregion

#pragma region ���� ������
	/*
	// �ǿ����ڸ� �ϳ��� ������Ű�ų� ���ҽ�ų �� ����ϴ� ������

	// ���� ���� ������
	// ������ ���� ������Ų �Ŀ� ������ �����ϴ� ������
	int a = 0;
	int result1 = 0;

	result1 = ++a; // ����
	printf("result1�� �� : %d\n", result1);

	result1 = --result1; // ����
	printf("result1�� �� : %d\n", result1);

	// ���� ���� ������
	// ������ ���� �� ���� ������ ���� ������Ű�� ������

	int b = 0;
	int result2 = 0;

	result2 = b++; // ����
	printf("result2�� �� : %d\n", result2);
	printf("%d\n", b); // b(1)

	result2 = b--; // ����
	printf("result2�� �� : %d\n", result2);
	printf("%d\n", b); 	// b(0)
	*/
#pragma endregion

#pragma region �ݺ���(for��)
	/*
	// �ʱ���� �����Ͽ� ���ǽ��� ����� ���� Ư���� Ƚ����ŭ �ݺ��ϴ� �ݺ���
	//      �ʱ��    ���ǽ�  ������
	for (int i = 0 ; i < 10 ; i++) // ������ ������ �ɶ����� ��� �ݺ�
	{
		printf("���� ��...\n"); // �ݺ��� ����
	}

	// �ݺ��� ����
	// �ݺ������� �ʱⰪ�� 1 ~ 5�� ���� ����մϴ�.
	for (int i = 1 ; i <= 5 ; i++)
	{
		// for���� ��� ������ ������ ���¿� �ݴ�� �ʱ���� �����ϰ� �Ǹ� ������ ��ġ���� �ʾ� ��� �ݺ������� ����Ǵ� ������ �߻� = ���ѷ���
		printf("i�� �� : %d\n", i);
	}
	

	// �ݺ��� ����
	// 1 ~ 10 ������ ���� �����ּ���.
	int result = 0;
	for (int i = 1 ; i <= 10 ; i++)
	{
		result += i;
		// ���� ���� ������ : +=, -=, *=, /=
	}
	printf("%d\n", result);
	*/

	// 2�� for��
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++)
		{
			printf("���ʿ� �ִ� for��\n");
		}
		printf("�ٱ��� �ִ� for��\n");
	}
#pragma endregion





}
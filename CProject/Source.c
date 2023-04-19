#include <stdio.h>

int main()
{
#pragma region 상수 지시 포인터
	// 포인터 변수를 상수로 선언하여, 포인터 변수가 가리키고 있는 주소에 존재하는 값을 변경할 수 없도록 설정하는 상수화
	// const char *
	/*
	int data = 100;
	int data1 = 20;
	const int* ptr = &data; // 4 Byte 역참조하는 걸 const(상수화)

	printf("ptr 변수의 값 : %p\n", ptr);

	// *ptr = 300; (포인터 변수 역참조는 상수화가 되었기 때문에 에러 발생

	ptr = &data1; // 역참조(가리키는것)하는걸 상수화했기 때문에 ptr값(주소값) 변경 가능 / 역참조해서 값 변경은 불가능
	printf("ptr 변수의 값 : %p\n", ptr); // ptr값 변경
	*/
#pragma endregion

#pragma region 포인터 상수
	// 상수로 선언한 포인터이므로, 해당 변수의 값을 변경할 수 없지만, 변수(value1)의 주소 값을 가리킬 수 있음
	// value1의 주소와 값만 변경 가능하고, value2의 주소참조와 값 변경 불가능
	/*
	int value1 = 30;
	int value2 = 60;
	
	int* const ptr1 = &value1;
	
	printf("value1의 값 : %d\n", value1);

	*ptr1 = 99999; // (O)

	// ptr1 = &value2; (Error) <= value2의 주소값 못 넣음.

	printf("value1의 값 : %d\n", value1);
	*/
#pragma endregion

#pragma region sizeof(자료형)
	/*
	float health = 66.5f;
	short* pointer = NULL;

	printf("char의 크기 : %d\n", sizeof(char));
	printf("short의 크기 : %d\n", sizeof(short));
	printf("int의 크기 : %d\n", sizeof(int));
	printf("long의 크기 : %d\n", sizeof(long));

	printf("float의 크기 : %d\n", sizeof(health));
	printf("double의 크기 : %d\n", sizeof(double));
	printf("long double의 크기 : %d\n", sizeof(long double));

	printf("Pointer의 크기 : %d\n", sizeof(pointer));
	*/
#pragma endregion

#pragma region 구구단
	/*
	for (int i = 2; i <= 9; i++)
	{
		printf("<%d단>\n", i);
		for (int j = 1; j <= 9; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
	*/
#pragma endregion

#pragma region scanf(입력 함수)
	// 표준 입력 함수로, 여러 종류의 데이터를 다양한 서식에 맞추어 입력해주는 함수

	// scanf <- SDL 검사 해제를 안하고 사용하게 되면 Error 발싱

	// scanf_s("입력할 변수의 서식", &변수) / & -> 변수의 주소 값
	/*
	int count = 0;

	printf("count 변수의 값을 입력해주세요 : ");
	scanf_s("%d", &count);

	// 표준 입력 함수는 입력을 수행할 때까지 다음 작업으로 넘어갈 수 없음

	printf("count 변수의 값 : %d", count);
	*/

	// 문제 별 찍기
	// 내가 입력한 값에 따라 별이 찍히도록 구현해주세요
	// ex ) 3 입력
	// ☆
	// ☆☆
	// ☆☆☆

	int num;

	printf("숫자 입력 : ");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++) 
	{
		for (int j = 1; j <= i; j++)
		{
			printf("☆");
		}
		printf("\n");
	}
#pragma endregion






}
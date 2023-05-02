#pragma once

#include <stdio.h>

// 코드 영역은 함수의 주소, 리터럴 저장
#pragma region 전역 변수
	// 함수 외부에서 선언된 변수로 프로그램 어디에서나 접근 가능하며, 프로그램이 종료되어야만 메모리에서 해제되는 변수
	// 데이터 영역에 초기화가 이루어진 전역변수, 정적 변수 저장(프로그램이 실행될 때 메모리에 올라가게 되고, 프로그램이 종료될 때 메모리가 해제됨)

int globalValue = 5;

#pragma endregion

#pragma region 정적 변수
// 지역 변수와 전역 변수의 특징을 둘다 가지고 있으며, 한 번만 초기화가 이루어짐
static int attack;

void Calculator()
{
	// static int value = 1;

	// value += 1;

	// printf("정적 변수 value의 값 : %d\n", value);
}
#pragma endregion

void Function()
{
	// int count = 0;

	// count += 1;
	// globalValue += 1;

	// printf("지역 변수 count의 값 : %d\n", count);
	// printf("globalValue의 값 : %d\n", globalValue);
}

void main()
{
#pragma region 지역 변수
	// '블록'{ } 내에서 선언된 변수로 블록 내에서만 유효하며, 블록이 종료되면 메모리에서 사라지는 변수
	// 스택에 지역변수, 매개변수 저장

	// A 지역
	// int data = 100; // void main( ) 함수 안에 있는 data 변수

	// {
	// 	B 지역
	// 	int data = 20; // 블록 내에 있는 지역 변수
	// 	printf("data의 값 : %d\n", data);
	// } // 블록이 종료되면서 블록 내에 int data 메모리 해제

	// printf("data의 값 : %d\n", data);

#pragma endregion


	// Function(); // 1
	// Function(); // 1

	// Calculator();
	// Calculator();

	// BSS영역에 초기화가 이루어지지 않은 전역 변수, 정적 변수가 저장 <= 프로그램 크기에 포함되지 않음 / BSS영역은 데이터영역과 힙영역 사이에 있음
	// printf("정적 변수 attack의 값 : %d\n", attack); 

	// 힙 영역에 malloc() <= 직접 메모리를 해제해야 함

#pragma region 범용 포인터
	// 자료형이 정해지지 않은 상태로 모든 자료형을 저장할 수 있는 포인터
	// 범용 포인터는 메모리 주소에 접근해서 값을 변경할 수 없음. 변수의 메모리에 접근하려면 범용 포인터가 가리키는 변수의 자료형으로 형 변환 해주어야 함

	// char charData = 'X';
	// int intData = 10;
	// float floatData = 5.75f;

	// void* ptr = NULL;

	// ptr = &charData;

	// *ptr = 'M'; <= 가리키는 타입이 void이기 때문에 역참조가 불가능
	// *(char*)ptr = 'M'; // 강제적으로 형 변환
	// printf("ptr이 가리키는 값 : %c\n", *(char*)ptr);

	// ptr = &intData;
	// *(int*)ptr = 47; 
	// printf("ptr이 가리키는 값 : %d\n", *(int*)ptr);
#pragma endregion

#pragma region 약수
	// 문제) 내가 입력한 숫자의 약수를 출력하세요.
	// 12 -> 1, 2, 3, 4, 6, 12

	// int num;

	// printf("숫자 입력 : ");
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
	// 논리 연산에서 두 피연산자 중 어느 한쪽만 '참'이면 우측의 피연산자의 값은 평가하지 않고 바로 결과를 얻는 행위

	// &&, || (논리 연산자)
	// &, | (비트 연산자)

	int x = 0;
	int y = 1;

	if (++x == 1 && ++y == 1) {}

	printf("x의 값 : %d, y의 값 : %d\n", x, y);
#pragma endregion
}


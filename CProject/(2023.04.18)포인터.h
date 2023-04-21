#pragma once

#include <stdio.h>

void main()
{
#pragma region 반복문 (while)
	// 특정 조건을 거짓이 될 때까지 계속해서 주어진 명령문을 실행하는 반복문
	/*
	int count = 5;

	while (count) // <- 조건
	{
		printf("게임 실행...\n");
		count--;
	}
	*/
#pragma endregion

#pragma region continue 문
	// 해당 조건문만 실행하지 않고, 반복문은 이어서 실행하는 제어문
	/*
	for (int i = 1; i <= 5; i++)
	{
		if (i == 3)
		{
			// continue;
			break; // 3일시 반복문 탈출
		}
		printf("%d ", i);
	}
	*/
#pragma endregion

#pragma region 형 변환
	// 서로 다른 자료형을 가지고 있는 변수끼리 연산이 이루어질 때 기존에 지정했던 자료형을 다른 자료형으로 변환하는 과정

	// 암묵적 형 변환 : 서로 다른 자료형으로 연산이 이루어질 때 자료형의 크기가 큰 자료형으로 변환되는 과정
	/*
	int integer = 10;
	float decimal = 2.5f;

	// double > float > int > short > char
	float result = integer + decimal; // integer가 암묵적으로 float 형 변환

	printf("result 변수의 값 : %f\n", result);

	// 명시적 형 변환 : 연산이 이루어지기 전에 사용자가 직접 자료형을 변환하는 과정

	// 프로그래밍에서 정수와 정수끼리의 연산은 정수만 나올수 있음
	// float 메모리 [2.0f] = 5/2  <= 정수끼리 연산해도 2.0이 나옴

	int a = 5;
	int b = 2;

	float result1 = (float)a / b; // a는 명시적 형 변환 / 암묵적 형 변환에 따라 b는 float할 필요 없음

	printf("result1의 값 : %f\n", result1);
	*/
#pragma endregion

#pragma region 주소 연산자
	/*
	// 변수의 주소 값을 변환하는 연산자(%p, &)
	// 변수의 주소 값을 출력하게 되면 가장 앞에 있는 시작 주소 값을 출력함

	int data = 333;

	// %p : 데이터의 주소를 출력하는 서식 지정자
	// x64 : 64비트 (포인터 : 8 Byte)
	// x86 : 32비트 (포인터 : 4 Byte)
	// 변수의 주소는 프로그램을 실행할 때마다 계속 바뀜
	printf("data변수의 주소 : %p\n", &data);
	*/
#pragma endregion

#pragma region 포인터
	// 메모리의 주소 값을 저장할 수 있는 변수
	// 포인터 변수의 크기는 무조건 64비트에서 8 Byte
	// 포인터 앞에 자료형은 몇바이트를 읽을지 지정해주기 위해 선언
	/*
	int box = 100;
	int box1 = 999;

	int * ptr = NULL; // int * ptr = &box; <= 선언과 동시에 초기화.

	ptr = &box; // box의 주소 값을 ptr에 저장

	// 포인터 변수도 자신의 메모리 공간을 가지고 있으며, 포인터 변수에 변수의 주소를 저장하게 되면 해당 변수의 시작 주소를 가리킴
	printf("ptr 변수의 값 : %p\n", ptr);
	printf("ptr 변수의 주소 값 : %p\n", &ptr);
	printf("box 변수의 주소 값 : %p\n", &box);
	printf("box 변수의 값 : %d\n", box);

	// 포인터 변수를 이용해 역참조해서 값을 바꿈
	*ptr = 600;
	printf("box 변수의 값 : %d\n", box);


	ptr = &box1; // ptr에 box1의 시작 주소값이 들어가 있음

	*ptr = -999; // 역참조
	printf("box 변수의 값 : %d\n", box);
	printf("box1 변수의 값 : %d\n", box1);

	double health = 10.5;

	// int ptr1은 4byte의 메모리 공간을 읽음
	int* ptr1 = &health;
	printf("ptr1 변수의 값 : %p\n", ptr1);

	// 포인터 변수를 저장하기 위해 주소 값을 저장할 변수의 자료형과 포인터 변수의 자료형이 일치해야 함
	*ptr1 = 66.75;
	printf("ptr1 변수가 가리키는 값 : %lf\n", *ptr1); // 쓰레기값x, 잘못 읽은 것
	*/
#pragma endregion

}
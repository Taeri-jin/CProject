#pragma once

#include <stdio.h>

int main() {
#pragma region 서식 지정자
	/*
	출력하기 위한 자료형의 정보를 명시적으로 지정해주는 것

	"%c" 문자 ( 서식 지정자 )
	"%d" 정수 ( 서식 지정자 )
	"%f" 실수 ( 서식 지정자 float )


	char character = 'B';
	int data = 100;
	float decimal = 9.953111111f;

	// printf(data); (x)
	// 서식과 변수의 형태가 일치하지 않으면 원하는 값이 출력되지 않음
	//printf("character의 값 : %f\n", character); (x)
	printf("character의 값 : %c\n", character);
	printf("data의 값 : %d\n", data);

	// float 4byte 크기의 실수형 자료형은 소수점 이하 6자리까지만 표기함
	printf("decimal의 값 : %f\n", decimal);

	// 서식 지정자의 순서는 왼쪽에서부터 시작함
	printf("data : %d, decimal : %f", data, decimal);
	*/
#pragma endregion

#pragma region 비트(bit)
	// 데이터를 나타내는 최소의 단위이며, 0 또는 1의 조합으로 논리 계산을 수행하는 단위
	// bit가 8개 모이면 1byte가 됨

	/* 10진수 -> 2진수
	10진수를 1이 될때까지 계속 2로 나누어 준 다음 나눈 위치의 나머지 값을 아래에서 위의 순서로 정렬
	*/

	/* 2진수 -> 10진수
	*/

	/*
	비트 연산자
	비트 단위로 논리 연산을 수행하기 위해 사용하는 연산자
	*/
	// AND : 두 개의 피연산자 모두 1이면 1을 반환하는 연산자
	int num1 = 10; // 00001010
	int num2 = 15; // 00001111
	char num3 = 10;
	char num4 = 15;
	char num5 = 129;

	printf("num1과 num2를 AND 연산한 결과 : %d\n", num1 & num2);

	// OR : 두 개의 피연산자 중에 하나라도 1이 있다면 1을 반환하는 연산자
	printf("num1과 num2를 OR 연산한 결과 : %d\n", num1 | num2);

	// XOR : 두 개의 피연산자가 서로 같으면 0을 반환하고, 서로 다르면 1을 반환하는 연산자
	printf("num1과 num2를 XOR 연산한 결과 : %d\n", num1 ^ num2);

	// NOT : 비트를 반전시키는(뒤집는) 연산자
	printf("num3을 NOT 연산한 결과 : %d\n", ~num3); // -128+64+32+16+8+4+2+1
	// 첫 번째 비트는 부호를 나타내며, 첫 번째 비트에 1이 있다면 값은 음수 0이 있다면 양수

	printf("num5의 값 : %d\n", num5); // -128~127만 표현 가능. 오버플로우 현상 발생

#pragma endregion
}

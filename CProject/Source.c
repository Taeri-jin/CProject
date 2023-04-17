#include <stdio.h>

void main()
{
# pragma region switch문
	/*
	// 어떤 결과에 따라 그 결과부터 실행되는 명령문

	int count = 3;

	// switch문의 경우 조건에 해당하는 값에 따라 조건의 위치로 이동
	// 선택지에서 많이 사용됨
	switch(count) // <- 값
	{
		// break문이란?
		// 특정한 지점에서 분기를 탈출하는 제어문
		case 0 : printf("0입니다.\n");
			break;
		case 1 : printf("1입니다.\n");
			break;
		case 2 : printf("2입니다.\n");
			break;
		default: printf("예외적인 값이 발생했습니다.\n");
			break;
	}
	*/
#pragma endregion

#pragma region 증감 연산자
	/*
	// 피연산자를 하나씩 증가시키거나 감소시킬 때 사용하는 연산자

	// 전위 증감 연산자
	// 변수의 값을 증감시킨 후에 연산을 수행하는 연산자
	int a = 0;
	int result1 = 0;

	result1 = ++a; // 증가
	printf("result1의 값 : %d\n", result1);

	result1 = --result1; // 감소
	printf("result1의 값 : %d\n", result1);

	// 후위 증감 연산자
	// 연산을 수행 한 다음 변수의 값을 증감시키는 연산자

	int b = 0;
	int result2 = 0;

	result2 = b++; // 증감
	printf("result2의 값 : %d\n", result2);
	printf("%d\n", b); // b(1)

	result2 = b--; // 감소
	printf("result2의 값 : %d\n", result2);
	printf("%d\n", b); 	// b(0)
	*/
#pragma endregion

#pragma region 반복문(for문)
	/*
	// 초기식을 연산하여 조건식의 결과에 따라 특정한 횟수만큼 반복하는 반복문
	//      초기식    조건식  증감식
	for (int i = 0 ; i < 10 ; i++) // 조건이 거짓이 될때까지 계속 반복
	{
		printf("게임 중...\n"); // 반복할 내용
	}

	// 반복문 문제
	// 반복문으로 초기값을 1 ~ 5의 값을 출력합니다.
	for (int i = 1 ; i <= 5 ; i++)
	{
		// for문의 경우 조건이 끝나는 형태와 반대로 초기식을 연산하게 되면 조건이 일치하지 않아 계속 반복적으로 실행되는 문제가 발생 = 무한루프
		printf("i의 값 : %d\n", i);
	}
	

	// 반복문 문제
	// 1 ~ 10 까지의 합을 구해주세요.
	int result = 0;
	for (int i = 1 ; i <= 10 ; i++)
	{
		result += i;
		// 복합 대입 연산자 : +=, -=, *=, /=
	}
	printf("%d\n", result);
	*/

	// 2중 for문
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++)
		{
			printf("안쪽에 있는 for문\n");
		}
		printf("바깥에 있는 for문\n");
	}
#pragma endregion





}
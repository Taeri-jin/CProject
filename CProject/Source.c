#include <stdio.h>  
#include <limits.h>

// #include 파일 처리 전처리문
// 시스템 파일이나 사용자 정의 파일을 프로그램 소스에 삽입하여 사용하기 위한 선언문

// 전처리기란?
// 프로그램이 컴파일되기 이전에 프로그램에 대한 사전 처리하는 과정

// C/C++ 빌드 과정
// 소스 코드 작성 -> 전처리 과정 -(컴파일)-> .Obj(010101)만들어짐 -> 링킹(StartUp Code) -> exe 파일

// C# 빌드 과정
// 소스 코드 작성 -> IL 언어 변환 -> Mac/Window/Linux

#pragma region 매크로
	// 프로그램 내에서 특정한 데이터가 문자열로 정의되고 처리되는 과정
	// 선언할때 변수가 아니라서 다 대문자로 선언함
	// 컴파일러가 아닌 선행처리기에 의해서 처리되는 문장이기 때문에 명령문 끝에 ; 사용안함
	// 매크로는 메모리 공간을 가지고 있지 않아서 리터럴 상수(변경불가능)
	// 주석 처리 안해도 됨

// 여러 배열을 선언했을 때 한번에 바꿀 수 있음 (int a[SIZE])
#define SIZE 5 // SIZE == 5

#pragma endregion

void main()
{
#pragma region 문자열
	// 연속적인 메모리 공간에 저장된 문자 변수의 집합

	// 문자열의 경우 포인터를 이용하여 문자열 상수를 가리키도록 설정할 수 있음
	// const char* name = "James"; // name에 J의 주소값 저장, J를 가리키고 있음, 문자열 상수이기 때문에 const로 접근 방지
	// 
	// // %s : 문자열을 출력하는 서식
	// printf("name 변수의 값 : %p\n", name);
	// printf("name 변수가 가리키는 값 : %s\n", name);
	// 
	// // 문자열 상수는 데이터 영역의 읽기 전용 공간에 저장되기 때문에 문자열의 값을 변경할 수 없음
	// // *name = 'G'; James가 데이터 read only data 영역(읽기 전용) => 값을 바꾸는게 불가능, 역참조 불가능
	// 
	// name = "Tom"; // read only data 영역에 Tom의 메모리가 만들어지면서 T의 주소값이 들어가게 됨
	// 
	// // 문자열은 맨 마지막에 무효의 문자(NULL)가 자동으로 포함됨
	// // NULL 문자의 역할은 문자열의 끝을 알려줌
	// 
	// printf("name 변수의 값 : %p\n", name); 
	// printf("name 변수가 가리키는 값 : %s\n", name);


	// 배열을 이용한 문자열
	// char string[] = "Game";
	// 
	// // 문자열은 공백도 함께 메모리 공간에 포함됨
	// // 문자 배열 사이에 무효의 문자를 넣게 되면 무효의 문자까지만 문자열을 출력
	// char string1[] = { "App l\0e" };
	// 
	// 
	// printf("string의 값 : %s\n", string);
	// printf("string1의 값 : %s\n", string1);
	// 
	// string[1] = 'b';
	// string[3] = 'o';
	// 
	// printf("string의 값 : %s\n", string);

	// rodata 영역에 있는 문자열을 스택영역으로 복사해 가져와서 다른 값 변경 불가능 
	// char 배열은 포인터 상수 => 인덱스에 접근해 값 변경은 가능. 주소값으로 접근해 값 변경은 불가능.
	// string = "Content"; -> 주소에 주소를 넣으려고 하고 있음
	// string = string1;
#pragma endregion

	// 매크로
	// printf("매크로 SIZE의 값 : %d\n", SIZE);
#pragma region 최댓값과 최솟값
	// 배열[5] = {10,5,6,99,1};

#define ARRAYSIZE 5

	int arr[] = { 10, 5, 6, 99, 1 };
	int min = INT_MAX;
	int max = INT_MIN;

	for (int i = 0; i < ARRAYSIZE; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	printf("최대값 : %d\n", max);

	for (int i = 0; i < ARRAYSIZE; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	printf("최솟값 : %d\n", min);
#pragma endregion
}
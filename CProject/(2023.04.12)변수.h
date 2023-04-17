#pragma once
#include <stdio.h> // stdio.h : 기본 입출력 헤더파일

void main() { // <- void main 하나만 존재해야 함
#pragma region github
	/*
	Github-레파지토리(new) <= 프로젝트가 만들어짐, commit->push 할수있음

	git
	gitBash
	SourceTree
	Github Desktop : file - options - 로그인, clone레파지토리
		change : 프로젝트 업데이트 내역 올라옴
		history에서도 변경된 사항 확인할 수 있음
		push 후 Fetch origin은 github에 업로드 완료
		github에서 다운로드 할 때 로그인 확인 후 clone으로 다운받은 후 파일에서 .sln파일 실행
	*/
#pragma endregion

#pragma region 변수 
	// pragma region 사용시 닫기했을때 리전 이름이 뜸, 주석필수
	/*
	변수란 ?
	데이터를 저장할 수 있는 메모리 공간을 생성한는 것
	*/

	/*
	자료형이란 ?
	데이터를 저장하기 위한 데이터의 형태를 정해주는 것
	*/

	/*
	자료형
	char : 한 문자를 저장하기 위한 자료형 (1byte)
	short : 정수를 저장하기 위한 자료형 (2byte)
	int : 정수를 저장하기 위한 자료형 (4byte)
	long : 정수 저장 (4byte)
	float : 실수 저장 (4byte)
	double : 실수 저장 (8byte)
	long double : (8~16 byte)
	*/

	// 자료형 + 변수의 이름 , ;(세미콜론) : 한 문장의 끝을 알려주는 기호
	/*
	char alphabet = 'A'; // 디버깅 화살표가 여기 있다면 디버깅 실행 상태

	int data = 100;

	float pi = 3.14f; //f안적으면 double로 잡히게 됨
	*/
#pragma endregion

	//변수의 이름 규칙
	/*
	1. 예약어를 사용할 수 없음 ( ex. int int = 100; )
	2. 숫자를 변수이름으로 사용할수 있으나 첫번째 단어로 사용할 수 없음 ( ex. int hp1 = 300;(o), int 1hp = 200;(x) )
	3. 변수의 이름은 대소문자를 구분함 ( ex. int attack, int ATTACK <= 서로 다른 변수이며 메모리를 가짐 )
	4. 변수의 이름에 공백이 포함될 수 없음 ( ex. int count Down;(x) )
	5. 변수의 이름으로 특수 기호는 "$", "_"만 가능 ( ex. int count_Down = 5;(o), int mo$ney = 999;(o)
	*/

	// 한 라인 선택할시 해당 라인에서 alt 누르고 밑으로 드래그

	//printf("안녕하세요");

	// 컴파일러 : 사람(10진수)과 컴퓨터(2진수) 사이에서 번역
	// 런타임 : 실행중에 오류. 소스코드 분석

#pragma region 변수의 초기화
	// 최초로 변수에 값을 저장해주는 과정
	int exp = 100; // 변수 선언
	exp = 999;
#pragma endregion

#pragma region 상수
	// 프로그램이 실행되는 동안 더 이상 값을 변경할 수 없는 메모리 공간임
	// 한 번 값을 초기화하게 되면 더 이상 값을 변경할 수 없음

	//const float pi = 3.141592;
	// pi = 6.4571; <= 상수로 선언되었기 때문에 값을 변경할 수 없음
	//L-value와 R-value

	/*
	심볼릭상수 : 메모리 공간을 가지고 있는 상수

	리터럴 상수 : 메모리 공간을 안 가지고 있는 상수. 순수 값 그 자체 ( ex. 3.141592 )
	*/
#pragma endregion

#pragma region 산술 연산자
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

	// 1. num1 변수 = B 변수 + C 변수
	num1 = b + c;
	printf("num1 = %d\n", num1);
	// 2. num2 변수 = E 변수 + F (심볼릭)상수
	num2 = e + f;
	printf("num2 = %d\n", num2);
	// 3. num3 변수 = 리터럴 상수 * B 변수
	num3 = 17 * b;
	printf("num3 = %d\n", num3);
	// 4. num4 변수 = 리터럴 상수 / F (심볼릭)상수
	num4 = 17 / f;
	printf("num4 = %d\n", num4);
	// 5. num5 변수 = 리터럴 상수 + 리터럴 상수
	num5 = 23 + 27;
	printf("num5 = %d\n", num5);

#pragma endregion
}


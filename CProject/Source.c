#include <stdio.h>
#include "SoundManager.h" // 헤더파일 가져오는법("")

#pragma region 재귀 함수
// 어떤 함수에서 자신을 다시 호출하여 작업을 수행하는 함수 = 자기 자신을 다시 호출
// 스택 => LIFO구조(Last in First out) => UI매니저, 팝업 시스템 관리할때 사용
// 메모리에 데이터를 넣으면 밑에부터 밑에서 부터 쌓이고 데이터를 뽑을려면 위에거부터 뽑힘
// (위)코드 영역에 함수의 주소 저장 -> 데이터 영역 -> 힙 -> 자유 영역 -> 스택(아래)
// 스택에 메모리가 쌓이다가 자유영역을 침범하면 스택 오버플로우

void Recursion(int x)
{
	if (x == 1)
	{
		// return 값을 반환한다
		// return 함수를 반환한다(종료한다)
		// 재귀 함수는 함수를 계속 호출하기 때문에 스택 영역에 메모리가 계속 쌓이게 되므로 스택 오버플로우가 발생
		return; // return 만나서 종료되는게 아니라 이전의 만들어진 메모리로 가서 차례로 해제됨
	}
	printf("Recursion() 함수 호출\n");

	Recursion(x - 1);
}
#pragma endregion

#pragma region 팩토리얼
// !5 -> 120 출력
int Factorial(int x)
{
	if (x == 1)
	{
		return 1;
	}
	else
	{
		return x * Factorial(x - 1);
	}
}
#pragma endregion

#pragma region 인라인 함수
// 함수를 호출하는 대신 함수가 호출되는 위치마다 함수의 코드를 복사하여 전달하는 방식의 함수

inline void Function()
{
	// 함수 호출 과정이 없음. main에서 바로 진행 => 오버 헤드 현상이 줄어듬
	// 인라인 함수는 함수를 호출하는 과정이 없으므로 처리 속도가 빠르지만 인라인 함수를 많이 사용하게 되면 함수의 코드가 복사되기 때문에 실행 파일의 크기가 커지게 됨
	printf("Function() 호출\n"); // 1~2줄(적은양)은 인라인 처리 하면 좋음. 코드량 많으면 x
}
#pragma endregion

void main()
{
	// 재귀 함수
	//Recursion(3);
	
	// 팩토리얼
	// int x;
	// printf("숫자 입력 : ");
	// scanf_s("%d", &x);
	// printf("Factorial의 값 : %d\n", Factorial(x));

	// 인라인 함수
	// Function();
	
#pragma region 반복문 (do~while)
	// 조건과 상관없이 무조건 한 번의 작업을 수행한 다음 조건에 따라 명령문을 실행하는 반복문
	// 1. 한 번 반복할 내용 실행
	// 2. 조건 검사 (참) 실행 <-> (거짓) 종료
	// 3. 반복할 내용 실행(조건이 거짓이 될 때까지 2->3->2->3 반복 )
	/*
	do
	{
		반복할 내용
	}while(조건);
	*/
	
	/*
	int count = 3;

	do
	{
		printf("로그인 시도\n");
		count--;
	} while (count > 0);
	*/
#pragma endregion

	Sound();

}

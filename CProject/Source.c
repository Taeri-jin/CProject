#include <stdio.h> // stdio.h : 기본 입출력 헤더파일

void main() 
{
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

	int data; // 자료형 + 변수의 이름 , ;(세미콜론) : 한 문장의 끝을 알려주는 기호

	printf("안녕하세요");
}

/*
Github-레파지토리(new) <= 프로젝트가 만들어짐, commit->push 할수있음

git
gitBash
SourceTree
Github Desktop : file - options - 로그인, clone레파지토리
	change : 프로젝트 업데이트 내역 올라옴
	history에서도 변경된 사항 확인할 수 있음
	push 후 Fetch origin은 github에 업로드 완료
	github에서 다운로드 할 때 로그인 확인 후 clone으로 다시 다운받은 후 파일에서 .sln파일 실행
*/
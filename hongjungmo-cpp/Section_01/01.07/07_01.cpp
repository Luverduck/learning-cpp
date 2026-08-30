// Section 01. C++의 기초적인 사용법
// 01.07 예약어와 키워드

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// 예약어는 식별자로 사용할 수 없다.
	// 
	// 1) 키워드 (keyword)
	int if = 0;
	
	// 2) 대체 토큰 (alternative token)
	int and = 10;

	// 3) C++ 라이브러리 내 예약된 이름
	// - 라이브러리 안에 정의된 매크로 이름
	int _IOSTREAM_ = 100; 
	// - 2개의 _(under bar)로 시작되는 단어
	// - external 키워드로 외부 연결되어있는 변수의 이름 

	return 0;
}
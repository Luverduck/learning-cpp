// Section 02. 변수와 기본적인 자료형
// 02.10 기호적 상수

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// 기호적 상수의 초기화

	// 기호적 상수를 컴파일 타임에 초기화하는 경우 constexpr 키워드로 정의한다.
	constexpr int const_static = 123;
	cout << const_static << endl;

	// 기호적 상수를 런타임 중에 초기화하는 경우 const 키워드로 정의한다.
	int num;
	cin >> num;
	const int const_dynamic = num;
	cout << const_dynamic << endl;

	return 0;
}
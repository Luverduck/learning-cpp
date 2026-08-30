// Section 01. C++의 기초적인 사용법
// 01.08 지역 범위

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// 내부 지역 범위에서 외부 지역 범위의 식별자를 볼 수 있다. (visible)

	// 외부 지역 범위에 변수 생성
	int var_external = 10;

	{
		// 내부 지역 범위에서는 외부 지역 범위의 변수를 볼 수 있다. (visible)
		cout << var_external << endl;
	}

	return 0;
}
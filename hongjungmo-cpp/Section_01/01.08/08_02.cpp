// Section 01. C++의 기초적인 사용법
// 01.08 지역 범위

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// 외부 지역 범위에서 내부 지역 범위의 식별자를 볼 수 없다. (invisible)
	
	{
		// 내부 지역 범위에 변수 생성
		int var_internal = 10;
	}

	// 외부 지역 범위에서는 내부 지역 범위의 변수를 볼 수 없다.
	cout << var_internal << endl;

	return 0;
}
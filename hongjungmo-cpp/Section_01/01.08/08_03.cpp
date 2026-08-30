// Section 01. C++의 기초적인 사용법
// 01.08 지역 범위

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// 외부와 내부 지역 범위에 동일한 식별자가 있을 때 가장 가까운 위치의 식별자를 사용한다.

	// 외부 지역 범위에 변수 생성
	int var = 100;
	{
		// 내부 지역 범위에 변수 생성
		int var = 10;
		// 내부 지역 범위에서 변수의 값 출력
		cout << "internal : " << var << endl;
	}

	// 외부 지역 범위에서 변수의 값 출력
	cout << "external : " << var << endl;

	return 0;
}
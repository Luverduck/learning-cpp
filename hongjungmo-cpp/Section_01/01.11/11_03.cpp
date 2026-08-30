// Section 01. C++의 기초적인 사용법
// 01.11 네임 스페이스

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// 네임 스페이스의 중첩
namespace OuterNamespace
{
	// 외부의 네임 스페이스에 변수 정의
	int var_outer = 100;

	namespace InnerNamespace
	{
		// 내부의 네임 스페이스에 변수 정의
		int var_inner = 30;
	}
}

int main()
{
	// 외부의 네임 스페이스에 정의된 변수에 접근
	cout << OuterNamespace::var_outer << endl;

	// 내부의 네임 스페이스에 정의된 변수에 접근
	cout << OuterNamespace::InnerNamespace::var_inner << endl;

	return 0;
}
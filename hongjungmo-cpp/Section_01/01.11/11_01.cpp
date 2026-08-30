// Section 01. C++의 기초적인 사용법
// 01.11 네임 스페이스

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// 네임 스페이스의 정의
namespace MyNamespace
{
	// 변수 정의
	int var = 10;

	// 함수 정의
	int add(int x, int y)
	{
		return x + y;
	}
}

int main()
{
	// 네임 스페이스 안에 있는 변수에 접근
	cout << MyNamespace::var << endl;

	// 네임 스페이스 안에 있는 함수에 접근
	cout << MyNamespace::add(3, 5) << endl;

	return 0;
}
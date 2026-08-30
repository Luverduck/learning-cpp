// Section 09. 함수
// 09.10 인라인 함수

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

inline int func(int x, int y)
{
	return x > y ? x + y : x - y;
}

int main()
{
	// 인라인 함수
	cout << func(3, 5) << endl;

	// 인라인 함수의 내용을 인라인 함수가 호출된 위치에 삽입한다.
	cout << (3 > 5 ? 3 + 5 : 3 - 5) << endl;
	
	return 0;
}
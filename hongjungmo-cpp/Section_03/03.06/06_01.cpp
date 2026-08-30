// Section 03. 연산자
// 03.06 논리 연산자

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// && 연산자의 우선순위가 || 연산자보다 높다
	bool value1 = true;
	bool value2 = false;
	bool value3 = false;

	bool exp = value1 || value2 && value3;
	// 실제 연산식 : ( value1 || ( value2 && value3 ) )

	return 0;
}
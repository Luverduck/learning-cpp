// Section 07. 배열과 문자열
// 07.08 C-style 문자열의 기호적 상수

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// Read-Only Data 영역에 저장된 문자열 리터럴
	const char* p_str = "Hello, World!";
	printf("%p\n", p_str);

	// Stack 영역에 복사된 문자열 리터럴
	char str[] = "Hello, World!";
	printf("%p\n", str);

	return 0;
};
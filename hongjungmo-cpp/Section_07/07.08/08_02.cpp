// Section 07. 배열과 문자열
// 07.08 C-style 문자열의 기호적 상수

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// Read-Only Data 영역에 저장된 문자열 리터럴
	const char* p_str1 = "Hello, World!";
	printf("%p\n", p_str1);

	// 기호적 상수의 문자열 리터럴이 같으면 Read-Only Data 영역의 동일한 문자열 리터럴을 가리킨다.
	const char* p_str2 = "Hello, World!";
	printf("%p\n", p_str2);

	return 0;
};
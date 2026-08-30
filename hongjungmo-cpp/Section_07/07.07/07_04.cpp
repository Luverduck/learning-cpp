// Section 07. 배열과 문자열
// 07.07 C-style 문자열

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

// <cstring>
// C-style 문자열(\0종료 문자열)을 다루는 함수를 포함하는 헤더 파일
#include <cstring>

using namespace std;

int main()
{
	char str1[] = "Hello";
	char str2[] = "hello";
	char str3[] = "Hello, World";
	char str4[] = "Hello";

	// strcmp 함수
	// str1과 str2의 문자열을 앞에서부터 비교한다.
	cout << strcmp(str1, str2) << endl;
	cout << strcmp(str1, str3) << endl;
	cout << strcmp(str1, str4) << endl;

	// strncmp 함수
	// str1과 str2의 문자열을 앞에서부터 count개만큼 비교한다.
	cout << strncmp(str1, str3, 5) << endl;
	cout << strncmp(str1, str3, 6) << endl;

	return 0;
};
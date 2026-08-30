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
	char source[] = "World!";
	char destination[50] = "Hello, ";

	// strcat 함수
	// destination의 문자열 끝에 있는 '\0'를 제거한 후 source의 모든 문자열을 덧붙인다.
	strcat(destination, source);
	cout << destination << endl;

	char destination1[50] = "Hello, ";

	// strncpy 함수
	// destination의 문자열 끝에 있는 '\0'를 제거한 후 source의 문자열을 count개만큼 덧붙인다.
	strncat(destination1, source, 2);
	cout << destination1 << endl;

	return 0;
};
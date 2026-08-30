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
	char source[] = "Hello, World!";
	char destination[50];

	// strcpy 함수
	// destination에 source의 '\0'를 포함한 모든 문자열을 복사한다.
	strcpy(destination, source);
	cout << destination << endl;

	char destination1[50];

	// strncpy 함수
	// destination에 source의 source의 문자열을 앞에서부터 count개만큼 복사한다.
	strncpy(destination1, source, 6);
	cout << destination1 << endl;
	// strncpy 함수로 문자열을 복사할 때 문자열 끝에 널 문자 \0를 자동으로 추가해주지 않는다.

	return 0;
};
// Section 01. C++의 기초적인 사용법
// 01.10 헤더 파일

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

// 헤더 파일을 포함
#include "MyHeader.h"

using namespace std;

int main()
{
	// 헤더 파일에 정의된 변수 출력
	int var = var_header;
	cout << var << endl;
	
	// 헤더 파일에 정의된 함수 실행 및 결과 출력
	int ret = add(2, 5);
	cout << ret << endl;

	return 0;
}
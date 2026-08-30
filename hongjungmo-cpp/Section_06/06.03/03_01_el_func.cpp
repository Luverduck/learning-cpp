// Section 06. 변수와 메모리
// 06.03 변수의 연결 상태

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// 외부 연결된 전역 변수
extern int var_global_el;

// 외부 연결된 전역 함수
extern void externalLinkageTest()
{
	cout << "Call external function" << endl;
	cout << var_global_el << endl;
}
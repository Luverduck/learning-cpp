// Section 06. 변수와 메모리
// 06.02 변수의 범위

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int var_global = 10; // 전역 변수

// 사용자 정의 함수
void func()
{
	int var_local = 3; // 지역 변수
};

// 메인 함수
int main()
{
	int var_local = 5; // 지역 변수
};
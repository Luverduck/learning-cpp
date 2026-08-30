// Section 09. 함수
// 09.07 함수의 반환형

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// 함수
int func(int v_x)
{
	// 지역 변수 초기화
	int x = v_x * 2;

	// 지역 변수의 값으로의 반환
	return x;
}

int main()
{
	// 함수 호출 및 값으로의 반환
	int ret = func(10);

	// 반환값 출력
	cout << ret << endl;

	return 0;
}
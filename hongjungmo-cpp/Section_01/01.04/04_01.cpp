// Section 01. C++의 기초적인 사용법
// 01.04 입출력 스트림

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	// 변수 초기화
	int x = 10;

	// 콘솔 입력 전 변수에 저장된 값 출력
	cout << "Before your input, x was " << x << endl;

	// 콘솔로 입력받은 값을 변수에 저장
	cin >> x;

	// 콘솔 입력 후 변수에 저장된 값 출력
	cout << "After your input, x is " << x << endl;

	return 0;
}
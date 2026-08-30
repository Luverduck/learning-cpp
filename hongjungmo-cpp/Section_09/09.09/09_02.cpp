// Section 09. 함수
// 09.09 함수 오버로딩

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

float func(float x);
double func(double x);

int main()
{
	// 변수 초기화
	int arg = 10;

	// 인수의 형 변환으로 인한 모호성
	func(arg);

	return 0;
}

float func(float x)
{
	cout << "func(float x)" << endl;
	return x;
};

double func(double x)
{
	cout << "func(double x)" << endl;
	return x;
};
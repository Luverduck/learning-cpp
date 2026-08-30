// Section 09. 함수
// 09.09 함수 오버로딩

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// 함수 오버로딩
void func(int i);
void func(double d);
void func(int i, double d);

int main()
{
	func(1);
	// func(int i) 호출

	func(1.0);
	// func(double d) 호출

	func(1, 1.0);
	// func(int i, double d) 호출

	return 0;
}

void func(int i)
{
	cout << "call func(int i)" << endl;
};

void func(double d)
{
	cout << "call func(double d)" << endl;
};

void func(int i, double d)
{
	cout << "call func(int i, double d)" << endl;
};
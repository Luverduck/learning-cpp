// Section 09. 함수
// 09.12 함수 포인터

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <array>

using namespace std;

// 기준에 따라 짝수/홀수만 출력하는 함수
void print(array<int, 10>& r_arr, bool (*check_func)(const int&))
{
	for (int i = 0; i < sizeof(r_arr) / sizeof(int); i++)
	{
		if (check_func(r_arr[i]))
			cout << r_arr[i] << " ";
	}
	cout << endl;
}

// 짝수일 때 true를 반환
bool isEven(const int& x)
{
	if (x % 2 == 0) return true;
	return false;
}

// 홀수일 때 true를 반환
bool isOdd(const int& x)
{
	if (x % 2 != 0) return true;
	return false;
}

int main()
{
	// 배열 초기화
	array<int, 10> arr = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	// 짝수만 출력
	print(arr, isEven);

	// 홀수만 출력
	print(arr, isOdd);

	return 0;
}
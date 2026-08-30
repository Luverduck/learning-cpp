// Section 07. 배열과 문자열
// 07.09 std::array (C++ 11)

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

// std::array
#include <array>

using namespace std;

int main()
{
	// 배열의 초기화
	std::array<int, 5> arr = { 0, 1, 2, 3, 4 };
	
	// 배열의 요소 접근
	cout << arr.at(0) << " ";
	cout << arr.at(1) << " ";
	cout << arr.at(2) << " ";
	cout << arr.at(3) << " ";
	cout << arr.at(4) << " ";
	cout << endl;

	// 배열의 길이
	int length = arr.size();

	cout << length << endl;

	return 0;
};
// Section 07. 배열과 문자열
// 07.09 std::array (C++ 11)

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

// std::array
#include <array>

using namespace std;

int func(std::array<int, 5>& param_arr)
{
	int result = 0;
	for (int i = 0; i < param_arr.size(); i++)
	{
		cout << param_arr.at(i) << " ";
		result += param_arr.at(i);
	}
	cout << endl;

	return result;
}

int main()
{	
	// 배열의 초기화
	std::array<int, 5> arg_arr = { 0, 1, 2, 3, 4 };

	// 배열을 함수의 인수로 전달
	int ret = func(arg_arr);

	// 함수의 결과값 출력
	cout << ret << endl;

	return 0;
};
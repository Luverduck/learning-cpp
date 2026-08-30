// Section 07. 배열과 문자열
// 07.10 std::vector

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

// std::array
#include <vector>

using namespace std;

int main()
{
	// 벡터의 초기화
	std::vector<int> arr = { 0, 1, 2, 3, 4 };

	// 벡터의 요소 접근
	cout << arr.at(0) << " ";
	cout << arr.at(1) << " ";
	cout << arr.at(2) << " ";
	cout << arr.at(3) << " ";
	cout << arr.at(4) << " ";
	cout << endl;

	// 벡터의 길이
	cout << arr.size() << endl;

	// 벡터의 길이 변경
	arr.resize(10);
	cout << arr.size() << endl;

	// 벡터의 길이를 증가시킬 경우 새로 추가된 벡터의 모든 요소는 0으로 초기화된다.
	for (int i : arr)
		cout << i << " ";
	cout << endl;

	return 0;
};
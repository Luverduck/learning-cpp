// Section 09. 함수
// 09.04 인수의 전달 (배열)

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>

using namespace std;

// 함수
void func(const vector<int>& arr)
{
	int len = sizeof(arr) / sizeof(int);

	cout << sizeof(arr) << endl;

	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
};


int main()
{
	// 배열 초기화
	vector<int> a_arr{ 1, 2, 3, 4 };

	// 참조에 의한 전달
	func(a_arr);

	return 0;
}
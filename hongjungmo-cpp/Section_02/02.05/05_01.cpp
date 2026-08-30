// Section 02. 변수와 기본적인 자료형
// 02.05 부동소수점형

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <limits>	// max(), min(), lowest()

using namespace std;

int main()
{
	// float의 표현 범위
	cout << numeric_limits<float>::max() << endl;
	cout << numeric_limits<float>::lowest() << endl;

	// double의 표현 범위
	cout << numeric_limits<double>::max() << endl;
	cout << numeric_limits<double>::lowest() << endl;

	// long double의 표현 범위
	cout << numeric_limits<long double>::max() << endl;
	cout << numeric_limits<long double>::lowest() << endl;

	return 0;
}
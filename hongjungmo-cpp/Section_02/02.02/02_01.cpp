// Section 02. 변수와 기본적인 자료형
// 02.02 정수형

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cmath>	// pow()
#include <limits>	// max(), min(), lowest()

using namespace std;

int main()
{
	// short가 가질 수 있는 최대값
	cout << pow(2, sizeof(short) * 8 - 1) - 1 << endl;
	cout << numeric_limits<short>::max() << endl;

	// short가 가질 수 있는 최소값
	cout << numeric_limits<short>::min() << endl;
	cout << numeric_limits<short>::lowest() << endl;

	// short의 오버플로우
	short s = 32768;		// short가 가질 수 있는 최대값
	cout << s + 1 << endl;	// 결과 : -32767

	return 0;
}
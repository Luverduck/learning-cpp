// Section 03. 연산자
// 03.05 비교 연산자

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cmath> // abs()

using namespace std;

int main()
{
	// 부동 소수점 수의 같음을 비교할 때 두 수의 차이가 입실론 이하면 같다고 판정한다.
	double d1(100 - 99.99);
	double d2(10 - 9.99);

	const double epsilon = 1e-10;

	if (std::abs(d1 - d2) < epsilon)
		cout << "Approximately equal" << endl;
	else
		cout << "Not equal" << endl;

	return 0;
}
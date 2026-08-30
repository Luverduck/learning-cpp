// Section 02. 변수와 기본적인 자료형
// 02.05 부동소수점형

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <iomanip> // setprecision()

using namespace std;

int main()
{
	// 실수를 출력할 때 정밀도를 조정한다.
	cout << setprecision(16) << endl;

	// 부동 소수점 방식으로 실수를 표현할 때 약간의 오차가 발생한다.
	// 부동 소수점 방식은 이러한 오차가 누적되어 실수를 완전하게 표현할 수 없다.
	double d = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1;
	cout << d << endl;

	return 0;
}
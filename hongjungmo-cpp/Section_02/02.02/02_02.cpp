// Section 02. 변수와 기본적인 자료형
// 02.02 정수형

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cmath>	// pow()
#include <limits>	// max(), min(), lowest()

using namespace std;

int main()
{
	// unsigned int가 가질 수 있는 최소값
	unsigned int ui = 0;

	// 부호가 없는 정수형의 오버플로우
	cout << ui - 1 << endl; // 결과 : 4294967295

	return 0;
}
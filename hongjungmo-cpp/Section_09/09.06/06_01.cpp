// Section 09. 함수
// 09.06 가변 인수

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

// <cstdarg>
#include <cstdarg>

using namespace std;


double getAvg(int count, ...)
{
	// 합계를 0으로 초기화
	double sum = 0.0;

	// 인수 포인터 (argument pointer)
	va_list ap;

	// 인수 포인터를 고정 인수 count의 메모리 다음 메모리 주소로 초기화
	va_start(ap, count);

	for (int i = 0; i < count; i++)
		// 인수 포인터에 저장된 메모리 주소에 저장된 값을 int형으로 매크로 확장한다.
		sum += va_arg(ap, int); // 그 후 인수 포인터를 다음 메모리 주소로 초기화한다.

	// 인수 포인터의 주소를 null로 초기화한다.
	va_end(ap);

	return sum / count;
};

int main()
{
	cout << getAvg(4, 1, 2, 3, 4) << endl;

	return 0;
}

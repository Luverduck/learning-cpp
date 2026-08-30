// Section 02. 변수와 기본적인 자료형
// 02.04 무치형

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

int main()
{
	// void는 메모리를 차지하지 않으므로 자료형으로 사용할 수 없다.
	//void v = 100;

	// [참고] void형 포인터
	int i = 100;
	double d = 4.2;

	// void형 포인터 선언
	void* ptr = nullptr;
	// 포인터의 크기는 오직 플랫폼에 의존한다.
	// 따라서 포인터 자료형이 다르더라도 그 크기는 같으므로 void형으로 형 변환 할 수있다.
	ptr = (void*)&i;
	ptr = (void*)&d;

	return 0;
}
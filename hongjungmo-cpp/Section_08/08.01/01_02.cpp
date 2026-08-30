// Section 08. 구조체
// 08.01 구조체

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

struct Person
{
	int age;
	float height;
	char name[8];
};

int main()
{
	Person aladin = { 20, 180.5, "Aladin" };
	Person genie = { 100, 195.8, "Genie" };

	// 구조체의 대입 연산
	// 구조체 변수에 다른 구조체 변수를 대입 연산하면 얕은 복사(shallow copy)한다.
	aladin = genie;

	cout << aladin.age << endl;
	cout << aladin.height << endl;
	cout << aladin.name << endl;

	return 0;
};
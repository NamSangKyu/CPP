#include <iostream>
#include <cstdlib>
using namespace std;
/*
	생성자(Constructor)
		: 클래스를 변수로 선언할때 제일먼저 호출되는 함수
	기본 생성자(Default Constructor)
		: 클래스에 생성자를 만들지 않으면 자동으로 추가되는 생성자(컴파일러가 자동으로 해줌)

	생성자 문법
		1. 리턴타입이 없는 함수
		2. 함수명이 클래스명
	소멸자 문법
		기본 생성자와 동일하나 함수명이 ~로 시작
*/
class Person {
private:
	char name[30];
	int age;
public:
	Person() {
		cout << "Default Constructor" << endl;
	}
	Person(char* n, int a) {
		strcpy_s(name, sizeof(name), n);
		if (a > 0)
			age = a;
	}
	~Person() {//소멸자  :  메모리에서 해제되지 전에 실행되는 함수
		cout << "Destructor" << endl;
	}
	void PrintInfo() {
		cout << name << " " << age << endl;
	}
	void Init(char* n, int a) {
		strcpy_s(name, sizeof(name), n);
		if (a > 0)
			age = a;
	}
};

int main() {
	//일반 배열
	cout << "일반 배열 선언" << endl;
	Person p[10];

	//동적 할당
	cout << "동적할당" << endl;
	cout << "C++ 형태" << endl;
	Person* ptr1 = new Person[10];
	delete[] ptr1;
	cout << "C언어 형태" << endl;
	Person* ptr2 = (Person*)malloc(sizeof(Person) * 10);
	//일반 배열, new 생성하는 정상적인 과정으로 객체가 생성
	//malloc -> 해당 크기만큼 메모리를 할당, 생성 X
	free(ptr2);
	cout << " --------------- " << endl;

	return 0;
}
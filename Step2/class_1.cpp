#include <iostream>
#include <cstring>
using namespace std;
class Person {
private://접근제어자 - private 은 외부로부터 접근을 차단
	char name[30];
	int age;
public://접근제어자 - public은 누구나 사용할 수 있게끔 오픈
	void PrintInfo() {
		cout << name << " " << age << endl;
	}
	//Person의 내용을 초기화 하는 함수, 매개변수로 문자열과, 정수를 받음
	void Init(char* n, int a) {
		strcpy_s(name, sizeof(name), n);
		if (a > 0)//나이는 1이상 저장
			age = a;
	}
};
int main() {
	Person p;
	char str[] = "홍길동";
	p.Init(str, 20);
//	p.age = -100;
	p.PrintInfo();

	return 0;
}
#include <iostream>
#include <cstring>
using namespace std;
struct Person {
	char name[30];
	int age;
	void PrintInfo() {
		cout << name << " " << age << endl;
	}
	//Person의 내용을 초기화 하는 함수, 매개변수로 문자열과, 정수를 받음
	void Init(char* n, int a) {
		strcpy_s(name,sizeof(name),n);
		if(a > 0)//나이는 1이상 저장
			age = a;
	}
};

int main(void) {
	Person p;
	char str[] = "홍길동";
	p.Init(str, 100);
	p.age = -100;
	p.PrintInfo();

	return 0;
}
#include <iostream>
#include <cstdlib>
using namespace std;

class Person {
private:
	char name[30];
	int age;
public:
	Person() {
		cout << "Person() Constructor" << endl;
		char str[] = "임시데이터";
		strcpy_s(name, sizeof(name),str);
		age = 0;
	}
	Person(char* n, int a) {
		cout << "Person(char* n, int a) Constructor" << endl;
		strcpy_s(name, sizeof(name), n);
		if (a > 0)
			age = a;
	}
	~Person() {
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
	Person p1;
	char str[] = "홍길동";
	Person p2(str,20);
	p1.PrintInfo();
	p2.PrintInfo();
	return 0;
}
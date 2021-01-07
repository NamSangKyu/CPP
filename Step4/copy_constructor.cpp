#include <iostream>
#include <cstring>
using namespace std;
class Person {
private:
	char* name;
	int age;
public:
	Person(char *n, int a) : age(a) {
		name = new char[strlen(n) + 1];
		strcpy_s(name, strlen(n) + 1, n);
		cout << "Constructor" << endl;
	}
	
	Person(const Person& p) {
		name = new char[strlen(p.name) + 1];
		strcpy_s(name, strlen(p.name) + 1, p.name);
		age = p.age;
		cout << "Copy Constructor" << endl;
	}
	~Person() {
		delete[] name;
		cout << "Deconstructor" << endl;
	}

	void PrintInfo() {
		cout << name << endl;
		cout << age << endl;
	}
};
int main(void) {
	char name[] = "Kim Chul Soo";
	Person p1(name, 20);
	Person p2 = p1;
	name[0] = 'B';
	p1.PrintInfo();
	p2.PrintInfo();
	return 0;
}
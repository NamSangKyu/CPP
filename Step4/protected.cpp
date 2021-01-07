#include <iostream>
using namespace std;
class Person {
protected:
	int money;
public:
	Person(int m) : money(m){}

	virtual void printMoneyInfo() {
		cout << "사람은 돈을 " << money <<  " 가지고 있습니다." << endl;
	}

};
class Student : public Person {
public:
	Student(int m) : Person(m) {}
	int takeBus() {
		money -= 1200;
		return 1200;
	}
	//재구현 - 선언부가 동일한 함수
	void printMoneyInfo() {
		cout << "학생이 : " << money << "원을  가지고 있다." << endl;
	}
};
void PrintMoney(Person *p){
	p->printMoneyInfo();
}
class Employee : public Person {
public:
	Employee(int m) : Person(m) {
	}
	void printMoneyInfo() {
		cout << "직원이 커피값을 냅니다." << endl;
		money -= 1000;
	}
};
int main() {
	Student s(10000);
	s.takeBus();
	s.printMoneyInfo();
	Person p(5000);
	PrintMoney(&p);
	PrintMoney(&s);
	return 0;
}

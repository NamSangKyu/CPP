#include <iostream>
using namespace std;
class Person {
protected:
	int money;
public:
	Person(int m) : money(m){}

	virtual void printMoneyInfo() {
		cout << "����� ���� " << money <<  " ������ �ֽ��ϴ�." << endl;
	}

};
class Student : public Person {
public:
	Student(int m) : Person(m) {}
	int takeBus() {
		money -= 1200;
		return 1200;
	}
	//�籸�� - ����ΰ� ������ �Լ�
	void printMoneyInfo() {
		cout << "�л��� : " << money << "����  ������ �ִ�." << endl;
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
		cout << "������ Ŀ�ǰ��� ���ϴ�." << endl;
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

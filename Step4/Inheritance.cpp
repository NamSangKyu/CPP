#include <iostream>
using namespace std;
/*
	Animal Ŭ����
	�������
			����
	����Լ�
			AnimalInfo --> ������ ������ ���---> �� ������ 10���Դϴ�.
			eat --> ������ ���̸� �Խ��ϴ�. ���

*/
class Animal {
private:
	int age;
public:
	Animal(int a) : age(a) {
		cout << "Animal Constructor" << endl;
	}
	~Animal() {
		cout << "Animal Deconstructor" << endl;
	}
	void AnimalInfo() {
		cout << "�� ������ ���̴� " << age << "���Դϴ�." << endl;
	}
	void eat() {
		cout << "������ ���̸� �Խ��ϴ�." << endl;
	}
};
class Dog : public Animal {
public:
	Dog(int a) : Animal(a) {
		cout << "Dog Constructor" << endl;
	}
	~Dog() {
		cout << "Dog Deconstructor" << endl;
	}
};
class Person : public Animal {
public:
	Person(int a) : Animal(a) {
		cout << "Person Constructor" << endl;
	}
	~Person() {
		cout << "Person Deconstructor" << endl;
	}
};
int main() {
	Dog d(20);
	d.eat();
	Person p(30);
	p.AnimalInfo();


	return 0;
}
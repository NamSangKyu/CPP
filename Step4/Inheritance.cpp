#include <iostream>
using namespace std;
/*
	Animal 클래스
	멤버변수
			나이
	멤버함수
			AnimalInfo --> 동물의 정보를 출력---> 이 동물은 10살입니다.
			eat --> 동물이 먹이를 먹습니다. 출력

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
		cout << "이 동물의 나이는 " << age << "살입니다." << endl;
	}
	void eat() {
		cout << "동물이 먹이를 먹습니다." << endl;
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
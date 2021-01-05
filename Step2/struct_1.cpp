#include <iostream>
using namespace std;
/*
	struct ---> C���: �ڵ忡�� ǥ���� ����� ������ ����ü
		        C++ : �ڵ忡�� ǥ���� ����� �����Ϳ� ����� ǥ��

	Person�� �̸���, ���̸� ����
	�̸��� ���̸� ������ �� �ִ� Person ����ü�� �۾�

	�Լ�
		Person ������ ����ϴ� �Լ��� �ѹ� �ۼ� - �Ű����� Person�� ����
		Person�� ������ �ִ� ���̸� �ϳ� ����(�Լ����� �۾��� �Ϸ�, ���� X)��Ű�� 
		�Լ��� �ۼ�(Call By Reference)

*/
struct Person {
	//��� ����
	char name[30];
	int age;
	//����ü�� �Լ��� �߰�
	//��� �Լ�
	void PrintInfo() {
		cout << name << " " << age << endl;
	}
};
void PrintPerson(Person p) {
	cout << p.name << " " << p.age << endl;
}
void AddAge(Person* p) {
	p->age++;
}
void AddAge(Person &p) {
	p.age++;
}
Person& RefPerson(Person& p) {
	return p;
}
int main(void) {
	struct Person p1 = { "��ö��",10 }; //C��� ����
	Person p2 = { "ȫ�浿", 20 };//C++�Ǹ鼭 struct Ű����� ���̻� �Ⱥٿ��� ��

	AddAge(p2);
	AddAge(&p2);
	PrintPerson(p1);
	PrintPerson(p2);

	//�Լ��� ���� Ÿ���� ������ ����ؼ� �� �����ڷ� ���� �ʿ�� ����.
	//�Ϲ� ������ ������ �׳� �� �޸𸮸� �����.
	Person& p3 = RefPerson(p2);
	Person p4= RefPerson(p2);
	cout << "p2 address : " << &p2 << endl;
	cout << "p3 address : " << &p3 << endl;
	cout << "p4 address : " << &p4 << endl;

	AddAge(p2);
	p2.PrintInfo();
	p3.PrintInfo();
	p4.PrintInfo();
		
	return 0;
}
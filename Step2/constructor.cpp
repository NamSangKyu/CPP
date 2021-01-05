#include <iostream>
#include <cstdlib>
using namespace std;
/*
	������(Constructor)
		: Ŭ������ ������ �����Ҷ� ���ϸ��� ȣ��Ǵ� �Լ�
	�⺻ ������(Default Constructor)
		: Ŭ������ �����ڸ� ������ ������ �ڵ����� �߰��Ǵ� ������(�����Ϸ��� �ڵ����� ����)

	������ ����
		1. ����Ÿ���� ���� �Լ�
		2. �Լ����� Ŭ������
	�Ҹ��� ����
		�⺻ �����ڿ� �����ϳ� �Լ����� ~�� ����
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
	~Person() {//�Ҹ���  :  �޸𸮿��� �������� ���� ����Ǵ� �Լ�
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
	//�Ϲ� �迭
	cout << "�Ϲ� �迭 ����" << endl;
	Person p[10];

	//���� �Ҵ�
	cout << "�����Ҵ�" << endl;
	cout << "C++ ����" << endl;
	Person* ptr1 = new Person[10];
	delete[] ptr1;
	cout << "C��� ����" << endl;
	Person* ptr2 = (Person*)malloc(sizeof(Person) * 10);
	//�Ϲ� �迭, new �����ϴ� �������� �������� ��ü�� ����
	//malloc -> �ش� ũ�⸸ŭ �޸𸮸� �Ҵ�, ���� X
	free(ptr2);
	cout << " --------------- " << endl;

	return 0;
}
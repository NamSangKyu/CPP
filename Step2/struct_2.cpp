#include <iostream>
#include <cstring>
using namespace std;
struct Person {
	char name[30];
	int age;
	void PrintInfo() {
		cout << name << " " << age << endl;
	}
	//Person�� ������ �ʱ�ȭ �ϴ� �Լ�, �Ű������� ���ڿ���, ������ ����
	void Init(char* n, int a) {
		strcpy_s(name,sizeof(name),n);
		if(a > 0)//���̴� 1�̻� ����
			age = a;
	}
};

int main(void) {
	Person p;
	char str[] = "ȫ�浿";
	p.Init(str, 100);
	p.age = -100;
	p.PrintInfo();

	return 0;
}
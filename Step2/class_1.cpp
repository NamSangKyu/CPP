#include <iostream>
#include <cstring>
using namespace std;
class Person {
private://���������� - private �� �ܺηκ��� ������ ����
	char name[30];
	int age;
public://���������� - public�� ������ ����� �� �ְԲ� ����
	void PrintInfo() {
		cout << name << " " << age << endl;
	}
	//Person�� ������ �ʱ�ȭ �ϴ� �Լ�, �Ű������� ���ڿ���, ������ ����
	void Init(char* n, int a) {
		strcpy_s(name, sizeof(name), n);
		if (a > 0)//���̴� 1�̻� ����
			age = a;
	}
};
int main() {
	Person p;
	char str[] = "ȫ�浿";
	p.Init(str, 20);
//	p.age = -100;
	p.PrintInfo();

	return 0;
}
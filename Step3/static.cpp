#include <iostream>
using namespace std;
//C��� �� static
int sum(int a, int b) {
	static int count = 0;
	count++;
	cout << "���� Ƚ�� : " << count << endl;
	return a + b;
}
//Ƚ�� üũ�ϴ� Ŭ����
// check �Լ��� �����Ҷ����� 
// ��� ������ �����ϴ� count ������ ������ ���� �ϳ��� �����ϴ� �Լ�
class Counter {
private:
	static int count;
public:
	Counter() {
		cout << "default constructor" << endl;
		count = 0;
	}
	static void AddCount() {
		count++;
		cout << "count : " << count << endl;
	}
};
//static �������� �ܺο��� �ʱ�ȭ �ݵ�� �ؾ���
int Counter::count = 0;
int main(void) {
	Counter c1, c2, c3, c4;
	c1.AddCount();
	c2.AddCount();
	c3.AddCount();
	c4.AddCount();
	Counter::AddCount();
	return 0;
}
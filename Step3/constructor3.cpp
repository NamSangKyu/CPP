#include <iostream>
#include <cstring>
using namespace std;
class Car {
private:
	//�ӵ�, �𵨸�
	char* model;
	int speed;
	const int MAX_SPEED;
public:
	//������ , �̴ϼȶ�����, Initializer --> �������(��)
	Car(char m[], int max) : MAX_SPEED(max), speed(0){
		//C++���� ��������� ���ڿ��϶� �ʱ�ȭ �ϴ� ���
		model = new char[strlen(m)+1];
		strcpy_s(model,strlen(m)+1 , m);
	}
	//�׼�, �극��ũ, ������
	void Accelator() {
		if (speed + 5 > MAX_SPEED)
			speed = MAX_SPEED;
		else
			speed += 5;
	}
	void Break() {
		if (speed - 3 < 0)
			speed = 0;
		else
			speed -= 3;
	}
	void PrintCarInfo() {
		cout << "�𵨸� : " << model << endl;
		cout << "�ִ� �ӵ� : " << MAX_SPEED << endl;
		cout << "���� �ӵ� : " << speed << endl;
	}
};
/*
	�������ڸ��� �ʱ�ȭ�� �ؾߵǴ� ������ �ΰ���
	1. ���  --->   const int num = 20;
	2. ������ ---> ������ �̸��� �߰������� ����
*/
int main(void) {
	char str1[] = "�ҳ�Ÿ";
	Car car1(str1,270);
	char str2[] = "�縮���̵�";
	Car car2(str2, 320);
	
	car1.PrintCarInfo();
	car2.PrintCarInfo();
	return 0;
}







#include <iostream>
using namespace std;
/*
*	Car
	�ڵ��� Ŭ����
		���� : �ӵ�(0~240), ���(1~6)
		��� : 
			�׼�������() : �����ҋ����� �ӵ��� 5�� �ø���.
			�극��ũ() : �����Ҷ����� �ӵ��� 3�� �����.
			���ü����(��) : ���� ���� ���� 1~6������ ����Ҽ� �ִ�.
		�ܺο��� �ӵ��� ��� ������ ������ ������ �Ұ�
		����� �ܺο��� ������ �����ϵ��� ����������(private, public)�� �����ϰ� ���
*/
class Car {
private:
	int speed;
	int gear;
public:
	void Accelator() {
		if (speed + 5 > 240)
			speed = 240;
		else
			speed += 5;
	}
	void Break() {
		if (speed - 3 < 0)
			speed = 0;
		else
			speed -= 3;
	}
	void ChangeGear(int g) {
		if (g < 1) return;
		if (g > 6) return;
		gear = g;
	}
	void PrintInfo() {
		cout << "�ӵ� : " << speed << endl;
		cout << "��� : " << gear << endl;
	}
	void Init() {
		speed = 0;
		gear = 1;
	}
};

int main() {
	Car car;
	car.Init();
	for (int i = 0; i < 200; i++) {
		car.Accelator();
	}
	for (int i = 0; i < 200; i++) {
		car.Break();
	}
	car.ChangeGear(3);
	car.ChangeGear(7);
	car.PrintInfo();

	return 0;
}
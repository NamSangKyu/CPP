#include <iostream>
using namespace std;
/*
*	Car
	자동차 클래스
		변수 : 속도(0~240), 기어(1~6)
		기능 : 
			액셀레이터() : 실행할떄마다 속도를 5씩 늘린다.
			브레이크() : 실행할때마다 속도를 3씩 낮춘다.
			기어체인지(기어값) : 기어값을 변경 기어는 1~6까지만 사용할수 있다.
		외부에선 속도나 기어 변수에 강제로 접근이 불가
		기능은 외부에서 접근이 가능하도록 접근제어자(private, public)를 적절하게 사용
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
		cout << "속도 : " << speed << endl;
		cout << "기어 : " << gear << endl;
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
#include <iostream>
#include <cstring>
using namespace std;
class Car {
private:
	//속도, 모델명
	char* model;
	int speed;
	const int MAX_SPEED;
public:
	//생성자 , 이니셜라이져, Initializer --> 멤버변수(값)
	Car(char m[], int max) : MAX_SPEED(max), speed(0){
		//C++에서 멤버변수가 문자열일때 초기화 하는 방법
		model = new char[strlen(m)+1];
		strcpy_s(model,strlen(m)+1 , m);
	}
	//액셀, 브레이크, 차정보
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
		cout << "모델명 : " << model << endl;
		cout << "최대 속도 : " << MAX_SPEED << endl;
		cout << "현재 속도 : " << speed << endl;
	}
};
/*
	선언하자마자 초기화를 해야되는 변수가 두가지
	1. 상수  --->   const int num = 20;
	2. 참조자 ---> 변수에 이름을 추가적으로 붙임
*/
int main(void) {
	char str1[] = "소나타";
	Car car1(str1,270);
	char str2[] = "펠리셰이드";
	Car car2(str2, 320);
	
	car1.PrintCarInfo();
	car2.PrintCarInfo();
	return 0;
}







#include <iostream>
using namespace std;
//추상 클래스 --> 직접적인 생성 X
class OnOff {
protected:
	bool power;
public:
	OnOff() {
		power = false;
	}
	virtual void PowerOnOff() = 0; //순수 가상함수 --> 오버라이딩을 강제화  ---> 오버라이딩을 안하면 해당클래스도 추상클래스가 됨
	virtual void PowerOn() = 0;
	virtual void PowerOff() = 0;
};
class TV : public OnOff {
public:
	void PowerOnOff() {
		power = !power;
		if (power)
			cout << "TV Power On" << endl;
		else
			cout << "TVPower Off" << endl;
	}
	void PowerOn() {
		power = true;
		cout << "TVPower On" << endl;
	}
	void PowerOff() {
		power = false;
		cout << "TV Power Off" << endl;
	}
};
class Boiler : public OnOff {
public:
	void PowerOnOff() {
		power = !power;
		if (power)
			cout << "Boiler Power On" << endl;
		else
			cout << "Boiler Power Off" << endl;
	}
	void PowerOn() {
		power = true;
		cout << "Boiler Power On" << endl;
	}
	void PowerOff() {
		power = false;
		cout << "Boiler Power Off" << endl;
	}
};
class Oven : public OnOff {
public:
	void PowerOnOff() {
		power = !power;
		if (power)
			cout << "Oven Power On" << endl;
		else
			cout << "Oven Power Off" << endl;
	}
	void PowerOn() {
		power = true;
		cout << "OvenOn" << endl;
	}
	void PowerOff() {
		power = false;
		cout << "OvenOff" << endl;
	}
};
class IoT {
private:
	OnOff* arr[5];
	int index;
public:
	IoT() {
		index = 0;
	}
	void AddDevice(int no) {
		if (index == 5) return;
		if (no == 0) {
			arr[index++] = new TV();
		}
		else if (no == 1) {
			arr[index++] = new Oven();
		}
		else {
			arr[index++] = new Boiler();
		}
	}
	void AllPowerOff() {
		for (int i = 0; i < index; i++)
			arr[i]->PowerOff();
	}
	void AllPowerOn() {
		for (int i = 0; i < index; i++)
			arr[i]->PowerOn();
	}
};


int main() {
	IoT iot;
	iot.AddDevice(1);
	iot.AddDevice(0);
	iot.AddDevice(0);
	iot.AddDevice(1);
	iot.AddDevice(1);

	iot.AllPowerOn();

	return 0;
}
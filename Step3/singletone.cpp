#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//�ζ� ��ȣ 5��Ʈ ������ ������ �ִ� Ŭ����
class Lotto {
private :
	int lotto[5][6];
public:
	Lotto() {
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 6; j++) {
				int n = rand() % 45+1;
				if (checkNumber(i, n))
					lotto[i][j] = n;
				else
					j--;
			}
		}
	}
	//               ���ȣ  ����
	bool checkNumber(int i, int n) {
		for (int j = 0; j < 6; j++) {
			if (lotto[i][j] == n)//�ߺ��� �ζǹ�ȣ�� ����
				return false;
		}
		return true;
	}
	void PrintLotto() {
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 6; j++)
				cout << lotto[i][j] << " ";
			cout << endl;
		}
	}
};
//�ζ� ����ó�� �̱� ���ִ� Ŭ����
//Ŭ���� - LottoMachine
//    �Լ� : �ζ� ��ȣ ��ü �ϳ��� ���� �����ϴ� �Լ�
//��ü�� ���α׷� ���ۺ��� ���������� �ϳ��� �����ؼ� ����ϴ� ���� �̱��� ����
class LottoMachine {
private:
	static LottoMachine *instance;
	LottoMachine() {
		cout << "LottoMachine constructor" << endl;
	}
public:
	//��ü�� �����ϴ� ����, ���丮 ����
	Lotto& createLotto() {
		Lotto* l = new Lotto();
		cout << l << endl;
		return *l;
	}
	static LottoMachine& getInstance() {
		if (instance == NULL)
			instance = new LottoMachine();
		return *instance;
	}
};
LottoMachine *LottoMachine::instance = NULL;
void test() {
	LottoMachine& machine = LottoMachine::getInstance();
	Lotto& l1 = machine.createLotto();
	cout << &l1 << endl;
	l1.PrintLotto();
	Lotto& l2 = machine.createLotto();
	cout << &l2 << endl;
	l2.PrintLotto();

}
int main(void) {
	LottoMachine &machine = LottoMachine::getInstance();
	srand((unsigned int)time(0));
	Lotto &l1 = machine.createLotto();
	cout << &l1 << endl;
	l1.PrintLotto();
	Lotto &l2 = machine.createLotto();
	cout << &l2 << endl;
	l2.PrintLotto();
	test();
	return 0;
}
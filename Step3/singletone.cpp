#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//로또 번호 5셋트 정보를 가지고 있는 클래스
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
	//               행번호  숫자
	bool checkNumber(int i, int n) {
		for (int j = 0; j < 6; j++) {
			if (lotto[i][j] == n)//중복된 로또번호가 있음
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
//로또 공장처럼 뽑기 해주는 클래스
//클래스 - LottoMachine
//    함수 : 로또 번호 객체 하나를 생성 리턴하는 함수
//객체를 프로그램 시작부터 끝날때까지 하나만 생성해서 사용하는 것을 싱글톤 패턴
class LottoMachine {
private:
	static LottoMachine *instance;
	LottoMachine() {
		cout << "LottoMachine constructor" << endl;
	}
public:
	//객체를 생성하는 패턴, 팩토리 패턴
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
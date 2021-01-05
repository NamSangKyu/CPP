#include <iostream>
#include <cstring>
using namespace std;
//신용카드 클래스
//	카드번호 0 ~>
//  카드주인 : 문자열
//  유효날짜 : 문자열 00/00

//  멤버변수를 초기화 생성자
//  카드정보 출력하는 함수

//카드번호를 외부에서 받지 않고 내부에 자동으로 할당 - static
class Card {
private:
	static int count;
	int cardNo;
	char* name;
	char* date;
public:
	Card(char n[], char d[]) :cardNo(++count){
		name = new char[strlen(n) + 1];
		strcpy_s(name, strlen(n) + 1, n);

		date = new char[strlen(d) + 1];
		strcpy_s(date, strlen(d) + 1, d);
	}
	void PrintCardInfo() {
		cout << "카드번호 : " << cardNo << endl;
		cout << "카드주인 : " << name<< endl;
		cout << "유효기간 : " << date << endl;
	}

};
int Card::count = 0;
int main(void) {
	char n1[] = "Kim";
	char d1[] = "05/23";
	Card c1(n1,d1);
	c1.PrintCardInfo();

	char n2[] = "Lee";
	char d2[] = "11/21";
	Card c2(n2, d2);
	c2.PrintCardInfo();

	return 0;
}
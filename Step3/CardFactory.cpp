#include <iostream>
#include <cstring>
using namespace std;
//�ſ�ī�� Ŭ����
//	ī���ȣ 0 ~>
//  ī������ : ���ڿ�
//  ��ȿ��¥ : ���ڿ� 00/00

//  ��������� �ʱ�ȭ ������
//  ī������ ����ϴ� �Լ�

//ī���ȣ�� �ܺο��� ���� �ʰ� ���ο� �ڵ����� �Ҵ� - static
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
		cout << "ī���ȣ : " << cardNo << endl;
		cout << "ī������ : " << name<< endl;
		cout << "��ȿ�Ⱓ : " << date << endl;
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
#include <iostream>
#include <cstring>
using namespace std;
class NameCard {
private:
	char name[30];
	char company[50];
	char tel[15];
	char position[10];
public:
	NameCard(char* n, char* c, char* t, char* p) {
		strcpy_s(name, sizeof(name), n);
		strcpy_s(company, sizeof(name), c);
		strcpy_s(tel, sizeof(name), t);
		strcpy_s(position, sizeof(name), p);
	}

	void PrintNameCardInfo() {
		cout << "�̸� : " << name << endl;
		cout << "ȸ��� : " << company << endl;
		cout << "����ó : " << tel << endl;
		cout << "���� : " << position << endl;

	}
};

int main() {

	return 0;
}
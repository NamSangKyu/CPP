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
		cout << "이름 : " << name << endl;
		cout << "회사명 : " << company << endl;
		cout << "연락처 : " << tel << endl;
		cout << "직급 : " << position << endl;

	}
};

int main() {

	return 0;
}
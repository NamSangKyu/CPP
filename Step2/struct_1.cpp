#include <iostream>
using namespace std;
/*
	struct ---> C언어: 코드에서 표현할 대상의 데이터 집합체
		        C++ : 코드에서 표현할 대상의 데이터와 기능을 표현

	Person은 이름과, 나이를 저장
	이름과 나이를 저장할 수 있는 Person 구조체를 작업

	함수
		Person 정보를 출력하는 함수를 한번 작성 - 매개변수 Person을 받음
		Person이 가지고 있는 나이를 하나 증가(함수에서 작업을 완료, 리턴 X)시키는 
		함수를 작성(Call By Reference)

*/
struct Person {
	//멤버 변수
	char name[30];
	int age;
	//구조체에 함수가 추가
	//멤버 함수
	void PrintInfo() {
		cout << name << " " << age << endl;
	}
};
void PrintPerson(Person p) {
	cout << p.name << " " << p.age << endl;
}
void AddAge(Person* p) {
	p->age++;
}
void AddAge(Person &p) {
	p.age++;
}
Person& RefPerson(Person& p) {
	return p;
}
int main(void) {
	struct Person p1 = { "김철수",10 }; //C언어 형태
	Person p2 = { "홍길동", 20 };//C++되면서 struct 키워드는 더이상 안붙여도 됨

	AddAge(p2);
	AddAge(&p2);
	PrintPerson(p1);
	PrintPerson(p2);

	//함수의 리턴 타입이 참조자 라고해서 꼭 참조자로 받을 필요는 없다.
	//일반 변수로 받으면 그냥 새 메모리를 만든다.
	Person& p3 = RefPerson(p2);
	Person p4= RefPerson(p2);
	cout << "p2 address : " << &p2 << endl;
	cout << "p3 address : " << &p3 << endl;
	cout << "p4 address : " << &p4 << endl;

	AddAge(p2);
	p2.PrintInfo();
	p3.PrintInfo();
	p4.PrintInfo();
		
	return 0;
}
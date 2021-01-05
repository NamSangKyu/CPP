#include <iostream>
using namespace std;
//C언어 때 static
int sum(int a, int b) {
	static int count = 0;
	count++;
	cout << "실행 횟수 : " << count << endl;
	return a + b;
}
//횟수 체크하는 클래스
// check 함수를 실행할때마다 
// 멤버 변수로 존재하는 count 정수형 변수의 값을 하나씩 증가하는 함수
class Counter {
private:
	static int count;
public:
	Counter() {
		cout << "default constructor" << endl;
		count = 0;
	}
	static void AddCount() {
		count++;
		cout << "count : " << count << endl;
	}
};
//static 변수들은 외부에서 초기화 반드시 해야함
int Counter::count = 0;
int main(void) {
	Counter c1, c2, c3, c4;
	c1.AddCount();
	c2.AddCount();
	c3.AddCount();
	c4.AddCount();
	Counter::AddCount();
	return 0;
}
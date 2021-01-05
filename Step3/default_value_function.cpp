#include <iostream>
using namespace std;
//디폴트값이 적용된 함수와 겹쳐서 호출이 모호해짐
//int sum(int a) {
//	return a + a;
//}
int sum(int a=10, int b=20) {
	return a + b;
}
//디폴트 값을 적용할려면 맨 마지막 매개변수터 설정
//int sum(int a = 10, int b = 20, int c) { // X
int sum(int a, int b=10, int c=20){
	return a + b + c;
}
int main(void) {

	cout << sum() << endl;
	//매개변수는 앞에서부터 채움
	cout << sum(5) << endl; //호출이 모호하면 실행 X
	cout << sum(5, 10) << endl;

	return 0;
}
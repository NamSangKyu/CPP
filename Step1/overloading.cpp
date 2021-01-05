#include <iostream>
//두수의 합을 구하는 함수
//정수형
int sum(int a, int b) {
	return a + b;
}
//실수형
double sum(double a, double b) {
	return a + b;
}
//문자형
char sum(char a, char b) {
	return a + b;
}
//오버로딩
// 함수를 중복 선언하기위한 문법
// 1. 매개변수 개수가 다름
// 2. 매개변수 타입 서로 다름
// 리턴타입(반환형)은 오버로딩에 영향을 미치지 않음(변수타입이 같아도 상관 없음)
int main(void) {
	std::cout << sum(10, 20) << std::endl;
	std::cout << sum(345.345, 20.123) << std::endl;
	std::cout << (int)sum('A', 'a') << " " << (int)'A' << " " << (int)'a' << std::endl;
	return 0;
}
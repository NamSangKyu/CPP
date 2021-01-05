#include <iostream>
//숫자 두개 더하는 결과값을 리턴하는 함수를 작성
//짧은 함수는 inline을 쓰지 않아도 자동으로 inline 처리(Compiler)
//inline 형태에 적합하지 않으면 inline을 붙여도 자동으로 제거
//inline 함수는 매크로 함수와 동일한 형태
inline int sum(int a, int b) {
	return a + b;
}

int main(void) {
	
	for (int i = 0; i < 10000; i++) {
		std::cout << sum(i, i + 1) << std::endl;
	}

	return 0;
}
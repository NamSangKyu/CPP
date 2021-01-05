#include <iostream>

int main(void) {
	int total = 0;

	// 초기화 영역에서 반복문에서 쓸 지역변수 선언이 가능
	for (int i = 1; i <= 100; i++) {
		if (i % 2 == 0)
			total += i;
	}
	//i++;//i는 지역변수라서 반복문 끝나면 사라짐
	std::cout << "1~100까지 숫자중 짝수 총합 : " << total << std::endl;

	return 0;
}
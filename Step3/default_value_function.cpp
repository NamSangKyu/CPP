#include <iostream>
using namespace std;
//����Ʈ���� ����� �Լ��� ���ļ� ȣ���� ��ȣ����
//int sum(int a) {
//	return a + a;
//}
int sum(int a=10, int b=20) {
	return a + b;
}
//����Ʈ ���� �����ҷ��� �� ������ �Ű������� ����
//int sum(int a = 10, int b = 20, int c) { // X
int sum(int a, int b=10, int c=20){
	return a + b + c;
}
int main(void) {

	cout << sum() << endl;
	//�Ű������� �տ������� ä��
	cout << sum(5) << endl; //ȣ���� ��ȣ�ϸ� ���� X
	cout << sum(5, 10) << endl;

	return 0;
}
#include <iostream>
using namespace std;

int main(void){
	int n;
	string win;
	cin >> n;
	
	if (n % 2 == 0)
		win = "CY";
	else if (n % 2 == 1)
		win = "SK";
		
	cout << win;
}

//3 * a + 1 * b = n
//n=5�� ���, a=1, b=2 / a=0, b=5 -> a+b�� Ȧ�� ���̹Ƿ� ��� ��� 
//n=6�� ���, a=2, b=0 / a=1, b=3 / a=0, b=6 -> a+b�� ¦�� ���̹Ƿ� â�� ��� 
//n=7�� ���, a=2, b=1 / a=1, b=4 / a=0, b=7 -> a+b�� Ȧ�� ���̹Ƿ� ��� ��� 
//n=8�� ���, a=2, b=2 / a=1, b=5 / a=0, b=8 -> a+b�� ¦�� ���̹Ƿ� â�� ���
//�̸� ���� n�� ¦���� ���� â���� ���, Ȧ���� ���� ����̰� ����Ѵٴ� �� �� �� �ִ�. 

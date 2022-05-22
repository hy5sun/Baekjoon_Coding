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
//n=5인 경우, a=1, b=2 / a=0, b=5 -> a+b가 홀수 개이므로 상근 우승 
//n=6인 경우, a=2, b=0 / a=1, b=3 / a=0, b=6 -> a+b가 짝수 개이므로 창영 우승 
//n=7인 경우, a=2, b=1 / a=1, b=4 / a=0, b=7 -> a+b가 홀수 개이므로 상근 우승 
//n=8인 경우, a=2, b=2 / a=1, b=5 / a=0, b=8 -> a+b가 짝수 개이므로 창영 우승
//이를 통해 n이 짝수일 때는 창영이 우승, 홀수일 때는 상근이가 우승한다는 걸 알 수 있다. 

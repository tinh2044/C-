#include <iostream>
#include <math.h>
using namespace std;

int main() {
	float dege, radian;

	cout << "nhap do : ";
	cin >> dege;

	radian = dege * (3.14 / 180);

	cout << "sin x : " << sin(radian) << endl;
	cout << "cos x : " << cos(radian) << endl;
	cout << "tan x : " << tan(radian) << endl;
	
}
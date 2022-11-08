#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a;
	int b;
	int c = 0;
	cout << "Enter A: ";
	cin >> a;
	
	b = a % 10;
	c += b;
	a %= 10;
	b = b * 100 + (a % 10)*10;
	c += a % 10;
	a /= 10;

		b += a;
		c += a;

		cout << "total : " << c << endl;
		cout << "revrese : " << b;




}

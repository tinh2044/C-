#include <iostream>
#include <math.h>
using namespace std;

int main() {
	float totalBook, price, totalOrder, totalPrice;
	float tax = 0.075;
	int priceTransport = 2000;

	cout << "nhap tong so sach : ";
	cin >> totalBook;

	cout << "nhap gia : ";
	cin >> price;

	totalPrice = price * totalBook;

	totalOrder = totalPrice + (tax * totalPrice) + totalBook * priceTransport;

	cout << "Tong don hang : " << totalOrder ;
}
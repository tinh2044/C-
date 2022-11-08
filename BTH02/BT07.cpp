
#include <iostream>
#include <math.h>
using namespace std;

int main() {
	float x1, x2, y1, y2;

	cout << "Nhap toa do diem thu 1: ";
	cin >> x1;
	cin >> y1;

	cout << "Nhap toa do diem thu 2: ";
	cin >> x2;
	cin >> y2;

	cout << "Khoang cach giua 2 diem la: " << sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));

}
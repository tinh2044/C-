#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int edgeA;
	int edgeB;
	int edgeC;
	float halfOfP;
	float p;
	cout << "Enter edge A: ";
	cin >> edgeA;

	cout << "Enter edge B: ";
	cin >> edgeB;

	cout << "Enter edge C: ";
	cin >> edgeC;

	halfOfP = (edgeA + edgeB + edgeC) / 2;

	p = sqrt(halfOfP * ((halfOfP - edgeA) * (halfOfP - edgeB) * (halfOfP - edgeC)));

		cout << "P : " << p;




}

#include <iostream>
#include<conio.h>
#include <string>
#include<stdio.h>
#include<string.h>
using namespace std;

int main() {
	string str;
	int len;
	

	cout << "Nhap chuoi ";

	getline(cin, str);

	len = str.length();
	cout << "do dai chuoi " << len << endl;
}
#include <iostream>
using namespace std;

int main()
{
    int n;
    int tong = 0;
    cout << "nhap n : ";
    cin >> n;

    while (n <= 1)
    {
        cout << "nhap lai n : ";
        cin >> n;
    }

    for (int i = 2; n > 0; i++)
    {
        tong += n % 10;
        n /= 10;
    }

    cout << tong;
}
#include <iostream>
using namespace std;

int main()
{
    int n;
    int res = 0;
    cout << "nhap n : ";
    cin >> n;

    while (n <= 10)
    {
        cout << "nhap lai n : ";
        cin >> n;
    }

    for (int i = 2; n > 0; i++)
    {
        res = res * 10 + n % 10;
        n /= 10;
    }

    cout << res;
}
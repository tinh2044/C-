#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    cout << "nhap n : ";
    cin >> n;

    while (n <= 1)
    {
        cout << "nhap lai n : ";
        cin >> n;
    }

    for (int i = 2; i <= n; i++)
    {
        sum += i % 2 != 0 ? i : 0;
    }

    cout << sum;
}
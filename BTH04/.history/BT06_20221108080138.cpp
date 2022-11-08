#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "nhap n : ";
    cin >> n;

    while (n <= 1)
    {
        cout << "nhap lai n : ";
        cin >> n;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "ko la so nguyen to";
            break;
        }

        if ((n % i != 0) && (i = n - 1))
        {
            cout << "la so nguyen to";
        }
    }
}
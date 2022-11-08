#include <iostream>
using namespace std;

int main()
{
    int n;
    int tongChan = 0;
    int tongLe = 0;
    cout << "nhap n : ";
    cin >> n;

    while (n <= 1)
    {
        cout << "nhap lai n : ";
        cin >> n;
    }

    for (int i = 2; i <= n; i++)
    {
        tongLe += i % 2 != 0 ? i : 0;
        tongChan += i % 2 == 0 ? i : 0;
    }

    cout << tongLe << ' ' << tongChan;
}
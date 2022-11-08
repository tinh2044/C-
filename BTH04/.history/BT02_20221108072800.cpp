#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    cout << "nhap n : ";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        sum += i % 2 != 0 ? i : 0;
    }

    cout << sum;
}
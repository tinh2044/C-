#include <iostream>
using namespace std;

int main()
{
    int arr[1000], n;
    // cin >> n;
    n = 9;
    arr[0] = 1;
    for (int i = 0; i < n; i++)
    {

        for (int j = i; j >= 0; j--)
        {
            if (j != 0 && j != i)
            {

                arr[j] = arr[j] + arr[j - 1];
            }
            else if (j == i && j != 0)
            {
                arr[j] = arr[j - 1];
            }
        }
        for (int j = n; j >= i; j--)
        {
            cout << " ";
        }
        for (int z = 0; z <= i; z++)
        {
            cout << arr[z] << " ";
        }

        cout << endl;
    }
}
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
// Library where getch() is stored
#include <conio.h>
using namespace std;
int main()
{
    char key_press;
    char num;
    int ascii_value;
    int max;
    vector<int> arr;
    cout << "nhap day so : ";
    while (1)
    {
        cin >> num;
        arr.push_back(int(num));
        key_press = getch();
        cout << key_press << endl;
        ascii_value = key_press;
        if (ascii_value == 26) // For ESC
            break;
        // cout << "Ban nhap phim-> \" " << key_press << " \" Gia tri ASCII =  " << ascii_value << "\n";
    }
    int length = sizeof arr / sizeof(int);
    max = arr[0];
    for (int i = 0; i <= length; i++)
    {
        max = max > arr[i] ? max : arr[i];
    }
    cout << max << endl;
    return 0;
}
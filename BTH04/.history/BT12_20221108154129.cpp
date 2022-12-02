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
    vector<int> arr;
    cout << "nhap day so : ";
    while (1)
    {
        cin >> num;
        arr.push_back(int(num));
        key_press = getch();
        ascii_value = key_press;
        if (ascii_value == 26) // For ESC
            break;
        // cout << "Ban nhap phim-> \" " << key_press << " \" Gia tri ASCII =  " << ascii_value << "\n";
    }

    cout << arr.max_size() << endl;
    return 0;
}
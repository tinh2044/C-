#include <iostream>
#include <stdio.h>
#include <string>
// Library where getch() is stored
#include <conio.h>
using namespace std;
int main()
{
    char key_press;
    string num;
    int ascii_value;
    cout << "nhap day so : ";
    while (1)
    {
        key_press = getch();
        ascii_value = key_press;
        if (ascii_value == 27) // For ESC
            break;
        cout << "Ban nhap phim-> \" " << key_press << " \" Gia tri ASCII =  " << ascii_value << "\n";
    }
    return 0;
}
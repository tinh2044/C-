#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str, newString;
    int convert;
    // newString = "";

    str = "nguyen";
    cout << "nhap ki tu : ";
    // getline(cin, str);
    convert = int(str[0]) < 96 ? -36 : 36;
    for (int i = 0; i < str.size(); i++)
    {
        newString += char(int(str[i]) + convert);
    }
    cout << newString;
}
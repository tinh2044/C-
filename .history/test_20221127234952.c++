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
    convert = int(str[0]) < 103 ? 32 : -32;
    for (int i = 0; i < str.size(); i++)
    {
        newString += char(int(str[i]) + convert);
        // cout << int(str[i]) << endl;
    }
    cout << newString;
}
#include <iostream>
#include <string>
using namespace std;

int main()
{
    float a, b;
    char pheptoan;
    float result;
    string option = "tiep";

    while (option == "tiep")
    {
        cout << "Nhap a va b :";
        cin >> a;
        cin >> b;
        cout << "Chon phep toan +, -, * , / ";
        while (true)
        {
            cin >> pheptoan;
            if (pheptoan == '+' || pheptoan == '-' || pheptoan == '*' || pheptoan == '/')
                break;

            cout << "ban da nhap sai phep toan vui long nhap lai";
        }
        result = 0;
        switch (pheptoan)
        {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        default:
            break;
        }

        cout << "ket qua" << result << endl;

        cout << "Ban co muon tiep tuc tinh toan";
        cout << "Chon 'thoat' hoac 'tiep '";
        while (true)
        {
            cin >> option;

            if ((option == "tiep") || (option == "thoat"))
                break;

            cout << "Ban da chon sai vui long chon tiep";
        }
    }
}
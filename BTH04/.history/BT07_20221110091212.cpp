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
        cout << "Nhap a va b : ";
        cin >> a;
        cin >> b;
        cout << "Chon phep toan +, -, * , / : ";
        while (true)
        {
            cin >> pheptoan;
            if (pheptoan == '+' || pheptoan == '-' || pheptoan == '*' || pheptoan == '/')
                break;

            cout << "ban da nhap sai phep toan vui long nhap lai : " << endl;
        }
        result = 0;
        if (pheptoan == '+') {

            result = a + b;
        }
        if (pheptoan == '-')
        {

            result = a + b;
        }
        if (pheptoan == '+')
        {

            result = a + b;
        }
        if (pheptoan == '+')
        {

            result = a + b;
        }

        cout << "ket qua : " << result << endl;

        cout << "Ban co muon tiep tuc tinh toan" << endl;
        cout << "Chon 'thoat' hoac 'tiep ' : ";
        while (true)
        {
            cin >> option;

            if ((option == "tiep") || (option == "thoat"))
                break;

            cout << "Ban da chon sai vui long chon lai : " << endl;
        }
    }
}
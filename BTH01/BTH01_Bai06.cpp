#include <string>
#include <iostream>
using namespace std;

int main()
{
    // std::string userName;
    string username;
    cout << "Xin chao, ten toi la Hoa! \n";
    cout << "Ten cua ban la gi \n";
    // sca("%d", &userName);
    // getline(cin, username);
    getline(cin, username);

    cout << "Chao ban " << username << " !" << endl;
    system("pause");
    return 0;
}

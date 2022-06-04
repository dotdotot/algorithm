#include <iostream>
#include <string>
using namespace std;
int main()
{
    string password;
    cin >> password;
    string pa;
    cin >> pa;
    string pppp = pa;

    if (password == pa)
    {
        cout << "동일합니다\n";
    }
    else
    {
        cout << "동일x\n";
    }

    cout <<pppp;
}
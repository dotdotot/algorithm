#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{   
    
    string textArr[15];
    for (int i = 0; i < 15; i++)
    {
        getline(cin, textArr[i]);
    }

    string text;
    for (int i = 0; i < 15; i++)
    {
        text += textArr[i];
    }

    cout << text;

    return 0;
}
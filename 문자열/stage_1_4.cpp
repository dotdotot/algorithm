#include <iostream>
using namespace std;

int main()
{
    int forNum;
    cin >> forNum;

    for (int i = 0; i < forNum; i++)
    {   
        string resultText = "";
        int textForNum;
        cin >> textForNum;
        string text;
        cin >> text;
        for (int ii = 0; ii < text.length(); ii++)
        {   
            for (int iii = 0; iii < textForNum; iii++)
            {
                resultText += text[ii];
            }
        }
        cout << resultText << endl;
    }

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string textNum;
    cin >> textNum;
    if (stoi(textNum) < 10)
    {
        textNum = textNum + "0";
    }
    int num = stoi(textNum);
    int cycle = 1;

    while (true)
    {
        string textNum1 = textNum.substr(0, 1);
        string textNum2 = textNum.substr(1);
        int result = stoi(textNum1) + stoi(textNum2);

        string resultText = to_string(result);
        resultText = resultText.substr(resultText.length() - 1);
        textNum = textNum2 + resultText;

        if (num == stoi(textNum))
            break;
        cycle++;
    }

    cout <<cycle;
    return 0;
}
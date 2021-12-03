#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num1, num2, num3;
    cin >> num1;
    cin >> num2;
    cin >> num3;
    int result = num1 * num2 * num3;
    string numText = to_string(result);

    int numArr[10] = {0};
    for (int i = 0; i < numText.length(); i++)
    {
        switch (numText[i])
        {
        case '0':
            numArr[0] = numArr[0] + 1;
            break;
        case '1':
            numArr[1] = numArr[1] + 1;
            break;
        case '2':
            numArr[2] = numArr[2] + 1;
            break;
        case '3':
            numArr[3] = numArr[3] + 1;
            break;
        case '4':
            numArr[4] = numArr[4] + 1;
            break;
        case '5':
            numArr[5] = numArr[5] + 1;
            break;
        case '6':
            numArr[6] = numArr[6] + 1;
            break;
        case '7':
            numArr[7] = numArr[7] + 1;
            break;
        case '8':
            numArr[8] = numArr[8] + 1;
            break;
        case '9':
            numArr[9] = numArr[9] + 1;
            break;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << numArr[i] << "\n";
    }
    return 0;
}
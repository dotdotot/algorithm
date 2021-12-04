#include <iostream>
using namespace std;

int main()
{
    int sub;
    cin >> sub;

    double *subArr = new double[sub];
    double maxNum = 0;
    for (int i = 0; i < sub; i++)
    {
        cin >> subArr[i];
        if (maxNum < subArr[i])
        {
            maxNum = subArr[i];
        }
    }
    double avgNum = 0;
    for (int i = 0; i < sub; i++)
    {
        subArr[i] = ((double)subArr[i] / (double)maxNum) * 100;

        avgNum += subArr[i];
    }

    cout << avgNum / sub;

    return 0;
}
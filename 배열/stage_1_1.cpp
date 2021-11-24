#include <iostream>
using namespace std;

int main()
{   
    int num = 0;
    cin >> num;

    int *intArr = new int[num];
    int min = 1000000;
    int max = -1000000;
    for (int i = 0; i < num; i++)
    {   
        cin >> intArr[i];

        if(min == 0){
            min = intArr[i];
        }
        else if (min > intArr[i])
        {
            min = intArr[i];
        }
        if (max < intArr[i])
        {
            max = intArr[i];
        }
    }

    cout << min << " " << max << "\n";
    return 0;
}
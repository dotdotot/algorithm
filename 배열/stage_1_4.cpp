#include <iostream>
using namespace std;

int main()
{
    int intArr[10];

    for (int i = 0; i < 10; i++)
    {
        cin >> intArr[i];
        intArr[i] = intArr[i] % 42;
    }

    int count = 1;
    for (int i = 0; i < 10; i++)
    {   
        bool check = false;
        for (int ii = i; ii < 10; ii++)
        {
            if(intArr[i] == intArr[ii]){
                check = true;
                break;
            }
        }
        if(check == false){
            count += 1;
        }
    }

    cout << count;

    return 0;
}
#include <iostream>
using namespace std;

int *NumSwap(int *arr, int i, int index)
{      
    int swapNum = arr[i];
    arr[i] = arr[index];
    arr[index] = swapNum;

    return arr;
}

int *mergesort(int *arr, int forNum)
{   
    int min = arr[0];
    int index = 0;
    for (int i = 0; i < forNum; i++)
    {   
        min = arr[i];
        for (int ii = 0; ii < forNum; ii++)
        {
            if (min < arr[ii]){
                min = arr[ii];
                index = ii;
                arr = NumSwap(arr,i,index);
            }
        }
    }
    return arr;
}

int main()
{

    int forNum = 0;
    cin >> forNum;

    int *intArr = new int[forNum];

    for (int i = 0; i < forNum; i++)
    {
        cin >> intArr[i];
    }

    intArr = mergesort(intArr, forNum);

    for (int i = 0; i < forNum; i++)
    {
        cout << intArr[i] << endl;
    }

    return 0;
}
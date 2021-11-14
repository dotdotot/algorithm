#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int count = 0;
    int num = 0;
    cin >> count >> num;
    int arr[count];

    for (int i = 0; i < count; i++)
    {
        int a;
        cin >> a;
        arr[i] = a;
    }

    for (int i = 0; i < count; i++)
    {
        if (arr[i] < num)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
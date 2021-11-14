#include <iostream>
using namespace std;

int main()
{
    int count;
    cin >> count;
    int result = 0;
    for (int i = 1; i <= count; i++)
    {
        result += i;
    }
    cout << result;
}
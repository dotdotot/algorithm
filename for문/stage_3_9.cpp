#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int count;
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        for (int star = 0; star < i + 1; star++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
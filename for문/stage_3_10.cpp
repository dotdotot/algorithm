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
        for (int space = 0; space < count - i - 1; space++)
        {
            cout << " ";
        }
        for (int star = 0; star <= i; star++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
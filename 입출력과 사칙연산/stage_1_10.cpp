#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b;
    cin >> a >>b;

    string arr[3];
    arr[0] = b[0];
    arr[1] = b[1];
    arr[2] = b[2];

    int result1 = stoi(a) * stoi(arr[2]);
    int result2 = stoi(a) * stoi(arr[1]);
    int result3 = stoi(a) * stoi(arr[0]);
    int result = result1 + result2*10 + result3*100;
    cout << result1 << endl << result2 << endl << result3 << endl;
    cout << result;
    return 0;
}
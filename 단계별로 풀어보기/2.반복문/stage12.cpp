#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (true)
    {
        int num1,num2;
        cin >> num1 >> num2;

        if(num1 == 0 && num2 == 0)
            break;
        cout << num1 + num2 << "\n";
    }
    

    return 0;
}
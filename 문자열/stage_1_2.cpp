#include <iostream>
#include <vector>
using namespace std;

int main(){
    int num;
    cin >>num;

    vector<char> charText(num);
    for(int i =0; i<num;i++){
        cin >> charText[i];
    }

    int result = 0;
    for(int i =0; i<num;i++){
        result += (int)charText[i] - '0';
    }

    cout << result;

    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int intArr[9];

    int count=0;
    int min=0;
    int max=0;
    for(int i=0; i<9;i++){
        cin >>intArr[i];

        if(min == 0) min = intArr[i];
        else if(min > intArr[i]) min = intArr[i];

        if(max == 0) max = intArr[i];
        else if(max < intArr[i]){
            max = intArr[i];
            count = i;
        }
    }

    cout << max << "\n" << count + 1;
    return 0;
}
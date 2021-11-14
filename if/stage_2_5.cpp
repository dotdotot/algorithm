#include <iostream>
using namespace std;

int main()
{
    int hour, min;
    cin >> hour >> min;

    if (min - 45 < 0)
    {
        hour = hour - 1;
        if(hour < 0){
            hour = 23;
            min = min + 60 - 45;
        }else{
            min = min + 60 - 45;
        }
    }else{
        min = min - 45;
    }
    cout << hour << " " << min << endl;
    return 0;
}
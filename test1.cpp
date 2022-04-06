#include<iostream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;

int main(void)
{
    string str="-1234";
    istringstream ss(str);
    string stringBuffer;
    vector<string> x;
    x.clear();
    cout<<"어떻게 잘리는지 확인해봅시다 ->";
    //구분자가 , 이라면 getline(ss, stringBuffer, ',')쓰면됨
    while (getline(ss, stringBuffer, '-')){
        x.push_back(stringBuffer);
        cout<<stringBuffer<<" ";
    }
    
    cout<<endl<<"vector 값을 출력해보자."<<endl;
    for(int i=0;i<x.size();i++){
        cout<<x[i]<<endl;
    }
    return 0;
}
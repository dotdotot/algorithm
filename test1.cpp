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
    cout<<"��� �߸����� Ȯ���غ��ô� ->";
    //�����ڰ� , �̶�� getline(ss, stringBuffer, ',')�����
    while (getline(ss, stringBuffer, '-')){
        x.push_back(stringBuffer);
        cout<<stringBuffer<<" ";
    }
    
    cout<<endl<<"vector ���� ����غ���."<<endl;
    for(int i=0;i<x.size();i++){
        cout<<x[i]<<endl;
    }
    return 0;
}
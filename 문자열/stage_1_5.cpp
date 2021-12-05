#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    string text;
    cin >> text;

    // 소문자 변환
    for (int i = 0; i < text.length(); i++)
    {
        text[i] = tolower(text[i]);
    }

    vector<int> alphabet(26, 0);
    for (int i = 0; i < text.length(); i++)
    {
        alphabet[(int)text[i] - 'a'] += 1;
    }

    int one = 0;
    int oneIndex = 0;
    int two = 0;
    int twoIndex = 0;
    for (int i = 0; i < alphabet.size(); i++)
    {
        if (one < alphabet[i])
        {
            one = alphabet[i];
            oneIndex = i;
        }
        else if (two < alphabet[i])
        {
            two = alphabet[i];
            twoIndex = i;
        }
    }
    
    if(one == two){
        cout <<"?";
    }else{
        cout << (char)(oneIndex + 'A');
    }
}
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> indexText(26, -1);

    string text;
    cin >> text;

    for (int i = 0; i < text.length(); i++)
    {   
        if(indexText[(int)text[i] - 'a'] == -1){
            indexText[(int)text[i] - 'a'] = i;
        }
    }

    for (int i = 0; i < indexText.size(); i++)
    {
        cout << indexText[i] << " ";
    }

    return 0;
}
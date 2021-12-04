#include <iostream>
using namespace std;

int main()
{
    int testNum;
    cin >> testNum;

    string *text = new string[testNum];
    for (int i = 0; i < testNum; i++)
    {
        cin >> text[i];
    }


    for (int i = 0; i < testNum; i++)
    {
        int check = false;
        int num = 1;
        int result = 0;
        for (int ii = 0; ii < text[i].length(); ii++)
        {
            if (text[i][ii] == 'O')
            {   
                // 점수 추가
                result += num;
                check = true;
            }
            else
            {   
                // 점수 추가
                result += 0;

                // X가 나왔으므로 추가점수는 1로 리셋
                num = 1;
                check = false;
            }

            if (check)
            {
                num += 1;
            }
        }
        cout << result << endl;
    }

    return 0;
}
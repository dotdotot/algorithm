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
                // ���� �߰�
                result += num;
                check = true;
            }
            else
            {   
                // ���� �߰�
                result += 0;

                // X�� �������Ƿ� �߰������� 1�� ����
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
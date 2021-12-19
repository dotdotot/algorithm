#include <iostream>
using namespace std;

int main()
{
    string text;
    cin >> text;

    int count = 0;
    for (int i = 0; i < text.length(); i++)
    {
        // č, ć
        if (text[i] == 'c')
        {
            if (text[i + 1] == '=')
            {
                count += 1;
                i += 1;
            }
            else if (text[i + 1] == '-')
            {
                count += 1;
                i += 1;
            }
            else
            {
                count += 1;
            }
        }
        // dž, đ
        else if (text[i] == 'd')
        {
            if (text[i + 1] == 'z')
            {
                if (text[i + 2] == '=')
                {
                    count += 1;
                    i += 2;
                }
                else
                {
                    count += 1;
                }
            }
            else if (text[i + 1] == '-')
            {
                count += 1;
                i += 1;
            }
            else
            {
                count += 1;
            }
        }
        // lj
        else if (text[i] == 'l')
        {
            if (text[i + 1] == 'j')
            {
                count += 1;
                i += 1;
            }
            else
            {
                count += 1;
            }
        }
        // nj
        else if (text[i] == 'n')
        {
            if (text[i + 1] == 'j')
            {
                count += 1;
                i += 1;
            }
            else
            {
                count += 1;
            }
        }
        // š
        else if (text[i] == 's')
        {
            if (text[i + 1] == '=')
            {
                count += 1;
                i += 1;
            }
            else
            {
                count += 1;
            }
        }
        // ž
        else if (text[i] == 'z')
        {
            if (text[i + 1] == '=')
            {
                count += 1;
                i += 1;
            }
            else
            {
                count += 1;
            }
        }
        // 아무문자도 아닐 경우
        else
        {
            count += 1;
        }
    }

    cout << count;
}
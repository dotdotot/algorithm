// �׷� �ܾ�� �ܾ �����ϴ� ��� ���ڿ� ���ؼ�, �� ���ڰ� �����ؼ� ��Ÿ���� ��츸�� ���Ѵ�.
// ���� ���, ccazzzzbb�� c, a, z, b�� ��� �����ؼ� ��Ÿ����, kin�� k, i, n�� �����ؼ� ��Ÿ���� ������ �׷� �ܾ�������, aabbbccb�� b�� �������� ��Ÿ���� ������ �׷� �ܾ �ƴϴ�.
// �ܾ� N���� �Է����� �޾� �׷� �ܾ��� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

// ù° �ٿ� �ܾ��� ���� N�� ���´�. N�� 100���� �۰ų� ���� �ڿ����̴�.
// ��° �ٺ��� N���� �ٿ� �ܾ ���´�. �ܾ�� ���ĺ� �ҹ��ڷθ� �Ǿ��ְ� �ߺ����� ������, ���̴� �ִ� 100�̴�.
#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    cin >> count;

    string *textArr = new string[count];
    for (int i = 0; i < count; i++)
    {
        cin >> textArr[i];
    }

    int num = 0;
    for (int i = 0; i < count; i++)
    {
        bool alphabet[26] = {false};    
        bool textCheck = true;
        char alpha;
        for (int ii = 0; ii < textArr[i].length(); ii++)
        {
            alpha = textArr[i][ii];
            if (ii != 0 && alphabet[alpha - 'a'] == true)
            {
                if (alpha != textArr[i][ii - 1])
                {   
                    textCheck = false;
                    break;
                }
            }
            alphabet[alpha - 'a'] = true;
        }

        if (textCheck == true)
        {
            num++;
        }
    }
    cout << num;

    return 0;
}
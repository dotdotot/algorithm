// 이와 같이 나열된 분수들을 1/1 → 1/2 → 2/1 → 3/1 → 2/2 → … 과 같은 지그재그 순서로 차례대로 1번, 2번, 3번, 4번, 5번, … 분수라고 하자.
// X가 주어졌을 때, X번째 분수를 구하는 프로그램을 작성하시오.

// 첫째 줄에 X(1 ≤ X ≤ 10,000,000)가 주어진다.

#include <iostream>
using namespace std;

int main()
{
    int input;
    cin >> input;

    if (input == 1)
    {
        cout << "1/1";
    }
    else
    {
        int leftNum = 2;
        int rightNum = 1;

        int count = 2;
        int line = 2;
        while (true)
        {
            for (int i = 0; i < line - 1; i++)
            {
                if (input == count)
                    break;
                leftNum--;
                rightNum++;
                count++;
            }
            if (input == count)
                break;

            rightNum++;
            line++;
            count++;
            for (int i = 0; i < line - 1; i++)
            {
                if (input == count)
                    break;
                leftNum++;
                rightNum--;
                count++;
            }
            if (input == count)
                break;
            leftNum++;
            line++;
            count++;
        }

        // 틀렸다고해서 left와 right부분 교체함
        cout << rightNum << "/" << leftNum;
    }

    // 어떤 동작 방식인지 이해하고 넘어가기!
    return 0;
}
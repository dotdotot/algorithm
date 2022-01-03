// M이상 N이하의 소수를 모두 출력하는 프로그램을 작성하시오.

//첫째 줄에 자연수 M과 N이 빈 칸을 사이에 두고 주어진다.(1 ≤ M ≤ N ≤ 1, 000, 000)M이상 N이하의 소수가 하나 이상 있는 입력만 주어진다.

//한 줄에 하나씩,증가하는 순서대로 소수를 출력한다.

#include <iostream>
#include <vector>
using namespace std;

vector<int> algorithm(int num1, int num2)
{
    int *arr = new int[num2];

    for (int i = 1; i <= num2; i++)
    {
        arr[i - 1] = i;
    }

    for (int i = 1; i < num2; i++)
    {
        if (arr[i] != -1)
        {
            for (int ii = i + 1; ii < num2; ii++)
            {
                if (arr[ii] % arr[i] == 0)
                {
                    arr[ii] = -1;
                }
            }
        }
    }

    vector<int> a;
    for (int i = 0; i < num2; i++)
    {
        if (arr[i] >= num1)
        {
            a.push_back(arr[i]);
        }
    }

    return a;
}

int main()
{
    int M, N;
    cin >> M >> N;

    vector<int> minority = algorithm(M, N);

    vector<int>::iterator iter;
    for (iter = minority.begin(); iter != minority.end(); iter++)
    {
        cout << *iter << endl;
    }
    return 0;
}
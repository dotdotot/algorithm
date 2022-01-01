// 자연수 M과 N이 주어질 때 M이상 N이하의 자연수 중 소수인 것을 모두 골라 이들 소수의 합과 최솟값을 찾는 프로그램을 작성하시오.
// 예를 들어 M=60, N=100인 경우 60이상 100이하의 자연수 중 소수는 61, 67, 71, 73, 79, 83, 89, 97 총 8개가 있으므로, 이들 소수의 합은 620이고, 최솟값은 61이 된다.

// 입력의 첫째 줄에 M이, 둘째 줄에 N이 주어진다.
// M과 N은 10,000이하의 자연수이며, M은 N보다 작거나 같다.

// M이상 N이하의 자연수 중 소수인 것을 모두 찾아 첫째 줄에 그 합을, 둘째 줄에 그 중 최솟값을 출력한다.
// 단, M이상 N이하의 자연수 중 소수가 없을 경우는 첫째 줄에 -1을 출력한다.

#include <iostream>
#include <stack>
using namespace std;

bool minorityCheck(int num)
{
    // true 소수 false 소수아님
    if (num == 1)
    {
        return false;
    }
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int M, N;
    cin >> M >> N;

    // N과 M 사이에 있는 소수들을 담는 변수
    stack<int> s;
    for (int i = M; i <= N; i++)
    {
        if (minorityCheck(i))
        {
            s.push(i);
        }
    }

    // N과 M사이에 소수가 없는 경우라면 -1 출력
    if (s.empty())
    {
        cout << -1;
    }
    // 소수가 존재한다면
    else
    {
        // 소수의 합계 변수
        int sum = 0;
        // 최소 값 소수 변수
        int min = s.top();

        // 스택이 비어있을 때까지 반복
        while (!s.empty())
        {
            sum += s.top();
            if (min > s.top())
            {
                min = s.top();
            }
            s.pop();
        }

        // 합계와 최소 값 출력
        cout << sum << endl << min;
    }
    return 0;
}
// 문제
// 첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제

// 입력
// 첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.

// 출력
// 첫째 줄부터 N번째 줄까지 차례대로 별을 출력한다.

#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int line;
    cin >> line;

    for (int i = 1; i <= line; i++)
    {
        for (int ii = 1; ii <= i; ii++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}
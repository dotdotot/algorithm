// 평소 반상회에 참석하는 것을 좋아하는 주희는 이번 기회에 부녀회장이 되고 싶어 각 층의 사람들을 불러 모아 반상회를 주최하려고 한다.
// 이 아파트에 거주를 하려면 조건이 있는데, “a층의 b호에 살려면 자신의 아래(a-1)층의 1호부터 b호까지 사람들의 수의 합만큼 사람들을 데려와 살아야 한다” 는 계약 조항을 꼭 지키고 들어와야 한다.
// 아파트에 비어있는 집은 없고 모든 거주민들이 이 계약 조건을 지키고 왔다고 가정했을 때, 주어지는 양의 정수 k와 n에 대해 k층에 n호에는 몇 명이 살고 있는지 출력하라.
// 단, 아파트에는 0층부터 있고 각층에는 1호부터 있으며, 0층의 i호에는 i명이 산다.

// 첫 번째 줄에 Test case의 수 T가 주어진다. 그리고 각각의 케이스마다 입력으로 첫 번째 줄에 정수 k, 두 번째 줄에 정수 n이 주어진다

// 각각의 Test case에 대해서 해당 집에 거주민 수를 출력하라.

// 1 ≤ k, n ≤ 14
#include <iostream>
using namespace std;

int peopleNum(int floorRoom[][15], int floor, int room)
{
    int num = 0;
    // floor - 1층의 room호까지의 주민의 수를 구해야함
    for (int i = 0; i <= room; i++)
    {
        num += floorRoom[floor - 1][i];
    }

    return num;
}

int main()
{
    int input;
    cin >> input;

    int floorRoom[15][15];

    for (int i = 0; i < 15; i++)
    {
        if (i == 0)
        {
            for (int ii = 0; ii < 15; ii++)
                floorRoom[i][ii] = ii + 1;
        }
        else
        {
            for (int ii = 0; ii < 15; ii++)
            {
                floorRoom[i][ii] = peopleNum(floorRoom, i, ii);
            }
        }
    }

    // for (int i = 0; i < 15; i++)
    // {
    //     for (int ii = 0; ii < 15; ii++)
    //     {
    //         cout << floorRoom[i][ii] << " ";
    //     }
    //     cout << endl;
    // }

    for (int i = 0; i < input; i++)
    {
        int floor, room;
        cin >> floor >> room;

        cout << floorRoom[floor][room - 1] << endl;
    }
    return 0;
}
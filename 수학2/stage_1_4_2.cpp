// M이상 N이하의 소수를 모두 출력하는 프로그램을 작성하시오.

//첫째 줄에 자연수 M과 N이 빈 칸을 사이에 두고 주어진다.(1 ≤ M ≤ N ≤ 1, 000, 000)M이상 N이하의 소수가 하나 이상 있는 입력만 주어진다.

//한 줄에 하나씩,증가하는 순서대로 소수를 출력한다.

#include <iostream>
using namespace std;

void getMonority(int M, int N)
{   
    int size = N + 1;
    int *arr = new int[size];
    // 초기화
    for (int i = 0; i < size; i++)
    {
        arr[i] = i;
    }

    // 에라토스테네스의 채 (2부터 시작)
    for (int i = 2; i < size; i++)
    {
        if (arr[i] == 0)
        {
            continue;
        }
        else
        {
            for (int j = i + i; j <= size; j += i)
            {
                arr[j] = 0;
            }

            if(arr[i] >= M){
                printf("%d\n", arr[i]);
            }
        }
    }
}

int main()
{   
    int M, N;
    cin >> M >> N;

    getMonority(M,N);

    return 0;
}
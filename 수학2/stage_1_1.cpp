//주어진 수 N개 중에서 소수가 몇 개인지 찾아서 출력하는 프로그램을 작성하시오.

//첫 줄에 수의 개수 N이 주어진다. N은 100이하이다. 다음으로 N개의 수가 주어지는데 수는 1,000 이하의 자연수이다.

//주어진 수들 중 소수의 개수를 출력한다.

#include <iostream>
using namespace std;

// 소수 판별법
// 2부터 num - 1 까지의 수 중
bool minorityCheck(int num)
{
    if (num == 1)
    {
        return false;
    }
    // false시 소수아님 true시 소수
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
    int input;
    cin >> input;

    // 값들을 담을 가변배열
    int *arr = new int[input];
    // 소수인지 체크하는 가변배열
    bool *arrCheck = new bool[input];

    // input만큼 반복하는 반복문(입력받고 소수인지 체크)
    for (int i = 0; i < input; i++)
    {
        cin >> arr[i];
        arrCheck[i] = minorityCheck(arr[i]);
    }

    // 소수의 개수를 체크하기위한 count 변수
    int count = 0;
    // input만큼 반복하는 반복문
    for (int i = 0; i < input; i++)
    {   
        // true상태라면 count 증가
        if (arrCheck[i] == true)
        {
            count++;
        }
    }

    // 최종적으로 소수의 개수 출력
    cout << count;

    return 0;
}
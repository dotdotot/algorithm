// 문제
// 세 개의 자연수 A, B, C가 주어질 때 A × B × C를 계산한 결과에 0부터 9까지 각각의 숫자가 몇 번씩 쓰였는지를 구하는 프로그램을 작성하시오.

// 예를 들어 A = 150, B = 266, C = 427 이라면 A × B × C = 150 × 266 × 427 = 17037300 이 되고, 계산한 결과 17037300 에는 0이 3번, 1이 1번, 3이 2번, 7이 2번 쓰였다.

// 입력
// 첫째 줄에 A, 둘째 줄에 B, 셋째 줄에 C가 주어진다. A, B, C는 모두 100보다 크거나 같고, 1,000보다 작은 자연수이다.

// 출력
// 첫째 줄에는 A × B × C의 결과에 0 이 몇 번 쓰였는지 출력한다.
// 마찬가지로 둘째 줄부터 열 번째 줄까지 A × B × C의 결과에 1부터 9까지의 숫자가 각각 몇 번 쓰였는지 차례로 한 줄에 하나씩 출력한다.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int arr[10] = {0};
    int a, b, c;
    // a b c 모두 3자리 정수
    scanf("%d%d%d", &a, &b, &c);
    int result = a * b * c;
    string resultText = to_string(result);
    for (int i = 0; i < resultText.length(); i++)
    {
        switch (resultText[i] - '0')
        {
        case 0:
            arr[0] += 1;
            break;
        case 1:
            arr[1] += 1;
            break;
        case 2:
            arr[2] += 1;
            break;
        case 3:
            arr[3] += 1;
            break;
        case 4:
            arr[4] += 1;
            break;
        case 5:
            arr[5] += 1;
            break;
        case 6:
            arr[6] += 1;
            break;
        case 7:
            arr[7] += 1;
            break;
        case 8:
            arr[8] += 1;
            break;
        case 9:
            arr[9] += 1;
            break;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
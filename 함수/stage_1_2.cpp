// 셀프넘버 구하기
// 셀프넘버는 자신의 생성자가 없는 숫자를 의미한다
// ex) 1이라면 본인의 숫자 + 각 자릿수를 더한다 1 + 1 = 2
// 2는 자신의 생성자가 있는 숫자이므로 셀프넘버이다

// 10까지의 셀프넘버는 1,3,5,7,9이다
// 10까지의 숫자들 모두 계산해보아도 1,3,5,7,9가 나오는 숫자는 없다.
#include <iostream>
using namespace std;
#define N 10001 // 10000까지의 수를 구할 것 이므로 (1~10000)

bool arr[N]; // 셀프넘버가 아니라면 true상태로 변하게 만들 예정

// n의 숫자를 받아와서 셀프넘버가 아닌 숫자를 true상태로 변하게 만들기위해
int SelfNumber(int n)
{   
    // 본인의 숫자는 더해줘야 하므로
    int sum = n;

    // 무한반복문
    while (true)
    {   
        // n이 0이된다면 중지
        if (n == 0)
        {
            break;
        }
        // 1의 자리수를 더해줌
        sum += n % 10;
        // n의 한 자리수를 줄임
        n = n / 10;
    }

    // 셀프넘버가 아닌 숫자를 반환
    return sum;
}

int main()
{   
    // 1~10000까지 반복하는 반복문
    for (int i = 1; i < N; i++)
    {   
        // 셀프넘버가 아닌 숫자를 받아옴
        int index = SelfNumber(i);

        // 10000과 같거나 보다 작아야하므로
        if (index < N)
        {   
            // 해당 숫자를 true상태로 변경
            arr[index] = true;
        }
    }

    // 1~10000까지 반복하는 반복문
    for (int i = 1; i < N; i++)
    {   
        // arr[i]가 false 상태라면
        if (!arr[i])
        {   
            // 셀프넘버라는 의미와 동일하므로 해당 숫자 출력
            cout << i << endl;
        }
    }

    return 0;
}
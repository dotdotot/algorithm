// 한수 구하기
// 한수란 어떤 정수의 자리수가 등차수열을 이루는 수이다.
// ex) 1~99는 비교할 자리수가 없으므로 한수이다.
// ex) 123은 3-2 == 2-1이므로 한수이다
// ex) 124는 4-2 != 2-1이므로 한수가 아니다.
// 1~1000까지 숫자를 입력받고 1~n까지 수 중 한수의 개수를 출력해준다
#include <iostream>
#include <vector>
using namespace std;

bool equalOrder(int num)
{   
    // 100보다 작다면 1~99라는 의미이므로 한수이다.
    if (num < 100)
    {
        return true;
    }
    // 100보다 같거나 큰 수
    else
    {
        // 1000보다 작은 수가 들어오므로
        int one = num % 10;        // 1의자리
        int two = (num / 10) % 10; // 2의자리
        int three = num / 100;     // 3의자리

        // one-two == two-three라면 한수이다
        if((one-two) == (two-three)){
            return true;
        }
        // 아니라면 한수가 아니다.
        else{
            return false;
        }
    }
}

int main()
{
    int num;
    cin >> num;

    vector<bool> intArr(num);
    // 1 ~ num까지 반복함
    for (int i = 1; i <= num; i++)
    {   
        // 수는 1부터 시작해야하므로 index+1을 해주어서 함수에 매개변수로 넘겨준다.
        if (equalOrder(i))
        {   
            intArr[i] = true;
        }
    }

    int count = 0;
    // 1~num까지 반복함
    for (int i = 0; i <= num; i++)
    {
        if (intArr[i])
        {
            count += 1;
        }
    }

    cout << count;

    return 0;
}
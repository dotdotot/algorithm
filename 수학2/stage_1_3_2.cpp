// 정수 N이 주어졌을 때, 소인수분해하는 프로그램을 작성하시오.

// 첫째 줄에 정수 N (1 ≤ N ≤ 10,000,000)이 주어진다.

// N의 소인수분해 결과를 한 줄에 하나씩 오름차순으로 출력한다. N이 1인 경우 아무것도 출력하지 않는다.
#include <iostream>
#include <vector>
using namespace std;

vector<int> algorithm(int num)
{   
    // 동적배열 v 생성
    vector<int> v;

    // 2~num까지 반복하는 반복문
    for (int i = 2; i <= num; i++)
    {       
        // 소수를 담을 변수 p생성
        int p = i;

        // p가 소수인지 판단
        for (int ii = 2; ii < 2; ii++)
        {   
            // p % ii가 0이라면 소수가 아니라는 의미이므로 p에 -1 값을 담아줌
            if(p % ii == 0){
                p = -1;
            }
        }

        // p가 -1이 아니라면 p에는 소수가 들어있다는 의미와 동일
        if(p != -1){
            // 무한반복문
            while (true)
            {       
                // num % p가 0이라면 p로 나누어도 나머지가 없다는 의미이므로 나누어줌
                if(num %p == 0){
                    num = num/p;
                    // 소인수 분해된 결과를 알아야하니 num를 나눈 변수 p의 현재 값을 v에 삽입
                    v.push_back(p);
                }
                // num % p가 0이 아니라면 나누면 나머지가 남는다는 의미이므로 무한반복문 종료
                else{
                    break;
                }
            }
            
        }

        // num이 1이라면 더이상 나눌 수 없음 반복문 종료
        if (num == 1)
            break;
    }
    return v;
}

int main()
{   
    // 입력을 받는 변수
    int num;
    cin >> num;

    // 소인수분해된 결과값을 담아옴
    vector<int> a = algorithm(num);
    // vector<int>의 반복자 생성
    vector<int>::iterator iter;

    // 소인수분해된 결과를 하나씩 출력
    for (iter = a.begin(); iter != a.end(); iter++)
    {
        cout << *iter << endl;
    }
    return 0;
}
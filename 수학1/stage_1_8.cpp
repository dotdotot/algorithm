// 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

// 첫째 줄에 A와 B가 주어진다. (0 < A,B < 10^10000)

// 첫째 줄에 A+B를 출력한다.

#include <iostream>
using namespace std;

void sumPrint(string a, string b)
{
    // 두 문자열의 길이 비교
    int maxLen = 0;
    if (a.length() > b.length())
        maxLen = a.length();
    else
        maxLen = b.length();

    int *arr;
    // 만약 더했는데 자릿수가 늘어나는 경우를 예상

    arr = new int[maxLen + 1]{0};
    maxLen += 1;

    int aLen = a.length();
    int bLen = b.length();
    int *aArr = new int[maxLen]{0};
    int *bArr = new int[maxLen]{0};

    // a의 각 자릿수 배열에 넣기
    for (int i = 0; i < aLen; i++)
    {
        aArr[maxLen - (i + 1)] = a[aLen - (i + 1)] - '0';
    }
    // b의 각 자릿수 배열에 넣기
    for (int i = 0; i < bLen; i++)
    {
        bArr[maxLen - (i + 1)] = b[bLen - (i + 1)] - '0';
    }

    // a + b계산하여 배열에 넣기
    for (int i = 0; i < maxLen; i++)
    {
        arr[maxLen - (i + 1)] += aArr[maxLen - (i + 1)] + bArr[maxLen - (i + 1)];
        if (arr[maxLen - (i + 1)] >= 10)
        {
            arr[maxLen - (i + 1)] -= 10;
            arr[maxLen - (i + 2)] += 1;
        }
    }

    // 출력
    for (int i = 0; i < maxLen; i++)
    {   
        if (i == 0){
            if(arr[i] != 0){
                cout << arr[i];
            }
        }else{
            cout << arr[i];
        }
    }
}

int main()
{
    string a, b;
    cin >> a;
    cin >> b;

    sumPrint(a, b);

    return 0;
}
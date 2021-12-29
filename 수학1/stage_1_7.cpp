// 상근이는 요즘 설탕공장에서 설탕을 배달하고 있다. 상근이는 지금 사탕가게에 설탕을 정확하게 N킬로그램을 배달해야 한다.
// 설탕공장에서 만드는 설탕은 봉지에 담겨져 있다. 봉지는 3킬로그램 봉지와 5킬로그램 봉지가 있다.
// 상근이는 귀찮기 때문에, 최대한 적은 봉지를 들고 가려고 한다.
// 예를 들어, 18킬로그램 설탕을 배달해야 할 때, 3킬로그램 봉지 6개를 가져가도 되지만, 5킬로그램 3개와 3킬로그램 1개를 배달하면, 더 적은 개수의 봉지를 배달할 수 있다.
// 상근이가 설탕을 정확하게 N킬로그램 배달해야 할 때, 봉지 몇 개를 가져가면 되는지 그 수를 구하는 프로그램을 작성하시오.

// 첫째 줄에 N이 주어진다. (3 ≤ N ≤ 5000)

// 상근이가 배달하는 봉지의 최소 개수를 출력한다. 만약, 정확하게 N킬로그램을 만들 수 없다면 -1을 출력한다.

#include <iostream>
using namespace std;

int bag(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 3)
    {
        return 1;
    }

    bool check = false;
    int count = 0;
    for (int i = 0; i <= (int)(num / 5); i++)
    {
        int num2 = num;
        num2 -= 5 * i;
        if(num2 % 3 == 0){
            check = true;
            count = i + (num2/3);
        }
    }

    if(check){
        return count;
    }

    return -1;
}

int main()
{
    int input;
    cin >> input;

    int count = bag(input);

    cout << count;
}
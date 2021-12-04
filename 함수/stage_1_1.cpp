#include <iostream>
#include <vector>
using namespace std;
long long sum(std::vector<int> &a)
{
    long long ans = 0;
    for (int i = 0; i < a.size(); i++)
    {
        ans += a[i];
    }
    return ans;
}

int main()
{
    int forNum;
    cin >> forNum;
    vector<int> intArr(forNum);
    for (int i = 0; i < forNum; i++)
    {
        cin >> intArr[i];
    }

    int result;
    result = sum(intArr);

    cout << result << endl;

    return 0;
}
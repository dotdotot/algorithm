    // 정수 N이 주어졌을 때, 소인수분해하는 프로그램을 작성하시오.

    // 첫째 줄에 정수 N (1 ≤ N ≤ 10,000,000)이 주어진다.

    // N의 소인수분해 결과를 한 줄에 하나씩 오름차순으로 출력한다. N이 1인 경우 아무것도 출력하지 않는다.
    #include <iostream>
    #include <vector>
    using namespace std;
    int *minorityAlgorithm(int num)
    {
        // num사이즈를 가진 가변배열 생성
        int *a = new int[num];
        // 1~num까지 초기화
        for (int i = 0; i < num; i++)
        {
            a[i] = i + 1;
        }

        // 1~num까지 반복하는 반복문
        for (int i = 0; i < num; i++)
        {
            // a[i] == 1이거나 -1이라면 아무것도 하지않음
            if (a[i] == 1 || a[i] == -1)
            {
            }
            // 아니라면
            else
            {
                // (i + 1) ~ num까지 반복하는 반복문
                for (int j = i + 1; j < num; j++)
                {
                    // a[j] % a[i]가 0이라면 소수가 아니라는 의미이므로 해당 값은 -1로 바꿔줌
                    if (a[j] % a[i] == 0)
                    {
                        a[j] = -1;
                    }
                }
            }
        }
        return a;
    }
    vector<int> smallMinorityAlgorithm(int *arr, int num)
    {   
        // 1을 제외한 소수를 M에 담는 과정
        vector<int> M;
        for (int i = 0; i < num; i++)
        {
            if (arr[i] != -1 && arr[i] != 1)
            {
                M.push_back(arr[i]);
            }
        }

        // num를 소인수분해 
        vector<int>::iterator iter;
        vector<int> SM;
        while (true)
        {   
            if(num == 1 || num == 0){
                break;
            }else{
                for(iter = M.begin();iter != M.end();iter++){
                    if(num % *iter == 0){
                        SM.push_back(*iter);
                        num = num/ *iter;
                        break;
                    }
                }
            }
        }
        // SM에는 num이 소인수분해된 소수들이 들어있음

        return SM;
    }

    int main()
    {
        int input;
        cin >> input;

        if (input == 1)
        {
            return 0;
        }

        // 1 ~ input 사이의 소수를 가지고 있는 변수(나머지 값들은 -1 표시)
        int *M = minorityAlgorithm(input);

        // 소인수분해
        vector<int> SM = smallMinorityAlgorithm(M, input);

        vector<int>::iterator iter;
        for(iter = SM.begin(); iter!= SM.end(); iter++){
            cout << *iter << endl;
        }

        return 0;
    }
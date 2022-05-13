// 시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
// 1 초	256 MB	192828	69656	57866	36.139%
// 문제
// 대학생 새내기들의 90%는 자신이 반에서 평균은 넘는다고 생각한다. 당신은 그들에게 슬픈 진실을 알려줘야 한다.

// 입력
// 첫째 줄에는 테스트 케이스의 개수 C가 주어진다.

// 둘째 줄부터 각 테스트 케이스마다 학생의 수 N(1 ≤ N ≤ 1000, N은 정수)이 첫 수로 주어지고, 이어서 N명의 점수가 주어진다. 점수는 0보다 크거나 같고, 100보다 작거나 같은 정수이다.

// 출력
// 각 케이스마다 한 줄씩 평균을 넘는 학생들의 비율을 반올림하여 소수점 셋째 자리까지 출력한다.

#include <iostream>
using namespace std;
int main()
{
    int size;
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {   
        // 학생 수 입력
        int sNum;
        scanf("%d", &sNum);

        // 학생 수 만큼 동적 배열 생성
        int *arr = new int[sNum];
        // 학생들의 점수 총합을 담을 변수 생성
        int sum = 0;
        for (int ii = 0; ii < sNum; ii++)
        {
            scanf("%d", &arr[ii]);
            sum += arr[ii];
        }
        // 평균 도출
        double avg = (double)sum / sNum;

        // 평균을 넘는 학생 수를 확인할 변수 생성
        int count = 0;
        for(int ii = 0; ii< sNum;ii++){
            if(arr[ii] > avg){
                count++;
            }
        }
    
        printf("%.3lf%\n",count/ (double)sNum * 100);
    }

    return 0;
}

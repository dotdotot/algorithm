#include <iostream>
using namespace std;

int main()
{
    cout << fixed;
    cout.precision(3);

    int classNum;
    cin >> classNum;

    for (int i = 0; i < classNum; i++)
    {
        int studentNum;
        cin >> studentNum;

        double *scoreArr = new double[studentNum];
        double avg = 0;
        for (int ii = 0; ii < studentNum; ii++)
        {
            cin >> scoreArr[ii];
            avg += scoreArr[ii];
        }
        avg = avg / studentNum;
        int count = 0;
        for(int ii =0; ii<studentNum;ii++){
            if(avg < scoreArr[ii]){
                count += 1;
            }
        }

        cout << ((double)count / studentNum) * 100 << "%" << endl;
        delete scoreArr;
    }
    return 0;
}
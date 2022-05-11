#include <stdio.h>

int cal(int next, int day, int i)
{
    printf("\n-------------%d월-------------\n", i);
    printf("일\t월\t화\t수\t목\t금\t토\n");
    for (int ii = 0; ii < next; ii++)
    {
        printf("\t");
    }
    for (int day = 1; day <= 31; day++)
    {
        if (next == 7)
        {
            printf("\n");
            next = 0;
        }
        printf("%d\t", day);

        next++;
    }

    return next;
}

int main(void)
{
    int next = 6;

    for (int i = 1; i <= 12; i++)
    {
        switch (i)
        {
        case 1:
            next = cal(next, 31, i);
            break;
        case 2:
            next = cal(next, 28, i);
            break;
        case 3:
            next = cal(next, 31, i);
            break;
        case 4:
            next = cal(next, 30, i);
            break;
        case 5:
            next = cal(next, 31, i);
            break;
        case 6:
            next = cal(next, 30, i);
            break;
        case 7:
            next = cal(next, 31, i);
            break;
        case 8:
            next = cal(next, 31, i);
            break;
        case 9:
            next = cal(next, 30, i);
            break;
        case 10:
            next = cal(next, 31, i);
            break;
        case 11:
            next = cal(next, 30, i);
            break;
        case 12:
            next = cal(next, 31, i);
            break;
        }
    }

    return 0;
}

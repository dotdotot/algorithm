#include <stdio.h>

int main(){
    int firstNum;
    int secondNum;
    int result;

    printf("ù��° ���ڸ� �Է��ϼ��� : ");
    scanf("%d", &firstNum);
    printf("�ι�° ���ڸ� �Է��ϼ��� : ");
    scanf("%d", &secondNum);

    result = firstNum + secondNum;

    printf("�μ��� �� : %d", result);
}
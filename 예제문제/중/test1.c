#include <stdio.h>
#include <stdbool.h>

bool sosu(int num);

int main(){
    int num;
    scanf("%d",num);

    bool check = sosu(num);

    if(check){
        printf("�Ҽ��Դϴ�.");
    }else{
        printf("�Ҽ��� �ƴմϴ�.");
    }
    return 0;
}

bool sosu(int num){
    printf("%d\n",num);
    for(int i = 2 ; i<=num-1; i++){
        printf("%d",i);
        if(num % i == 0){
            return false;
        }
    }
    return true;
}
#include <stdio.h>
// #include <stdbool.h>

// bool sosu(int num);

// int main(){
//     int num =0;
//     scanf("%d",&num);
    
//     int check = sosu(num);

//     if(check){
//         printf("�Ҽ��Դϴ�.");
//     }else{
//         printf("�Ҽ��� �ƴմϴ�.");
//     }
//     return 0;
// }

// bool sosu(int num){
//     for(int i = 2 ; i<=num-1; i++){
//         if(num % i == 0){
//             return false;
//         }
//     }
//     return true;
// }


int main() {

    int num;
    int cnt = 0;

    printf("������ �Է����ּ���: ");
    scanf("%d", &num);

    for(int i =2;i<num;i++) {
        if(num%i == 0)
            cnt++;
    }

    if(cnt == 2)
        printf("%d�� �Ҽ��Դϴ�.",num);
    else
        printf("%d�� �Ҽ��� �ƴմϴ�.",num);
}
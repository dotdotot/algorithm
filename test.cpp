#include <stdio.h>
// #include <stdbool.h>

// bool sosu(int num);

// int main(){
//     int num =0;
//     scanf("%d",&num);
    
//     int check = sosu(num);

//     if(check){
//         printf("소수입니다.");
//     }else{
//         printf("소수가 아닙니다.");
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

    printf("정수를 입력해주세요: ");
    scanf("%d", &num);

    for(int i =2;i<num;i++) {
        if(num%i == 0)
            cnt++;
    }

    if(cnt == 2)
        printf("%d는 소수입니다.",num);
    else
        printf("%d는 소수가 아닙니다.",num);
}
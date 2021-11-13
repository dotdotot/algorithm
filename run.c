#include <stdio.h>

int main(){
    int a =10;
    int b = 20;
    int c;
    c = a+b;
    printf("a + b = %d\n", c);
    for(int i =0;i<10;i++){
        printf("C = %d\n", c-i);
    }

    return 0;
} 
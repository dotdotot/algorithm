#include <stdio.h>

int main(){
    int a, b, c, d, e, f, g, h, i,j;

    printf("������ �Է��Ͻÿ� : ");
    scanf("%d",&a);
    printf("������ �Է��Ͻÿ� : ");
    scanf("%d",&b);

    c=a*(b/100);
    d=a*(b%10);
    e=a*(b/10%10);
    f=a*b;
    printf("%d\n",e);
    printf("%d\n",d);
    printf("%d\n",c);
    printf("%d",f);
    return 0;

}
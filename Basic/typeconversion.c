#include<stdio.h>
int main(){
    int a=(int)6.00000;//uses of explicit
    int b=4+9/6*10;//precidence of operator ,it goes from from left to right which are having the same associative i.e,precedence
    int c=5*2-2*3;//having same precedence is calculated from left to right
    int d=5*(2/2)*3;

    printf("the valuse of a,b,c and d are :%d\n%d\n%d\n%d\n",a,b,c,d);
    return 0;
}
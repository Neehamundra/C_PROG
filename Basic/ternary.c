#include<stdio.h>
int main(){
    int age;
    printf("enter the age:");
    scanf("%d\n",&age);

    age >= 18 ? printf("adults\n") :printf("not adults\n");
    return 0;
}
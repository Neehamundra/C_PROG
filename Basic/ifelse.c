#include<stdio.h>
int main(){
    //this frogram is to use the if else statement
    int age;
    printf("enter the age:");
    scanf("%d\n",&age);

    if(age>18){
        printf("They are elegible for voting\n");
        printf("They can drive");
    }
    else{
        printf("they are not elegible for voting");
    }
    printf("thankyou");
    return 0;
}
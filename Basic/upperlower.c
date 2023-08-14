#include<stdio.h>
int main(){
    char ch;
    printf("enter the character:");
    scanf("%c",&ch);

    if(ch >='a' && ch <= 'z'){
        printf("lower case\n");
    }
    else if(ch >='A' && ch <= 'z'){
        printf("upper case\n");
    }
    else{
        printf("not a english language");
    }
}
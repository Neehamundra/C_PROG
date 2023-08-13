#include<stdio.h>
int main(){
    int marks;
    printf("enter the marks:");
    scanf("%d\n",&marks);
    
    if(marks>90){
        printf("A\n");
    }
    else if(marks>70<80){
        printf("b\n");
    }
    else(marks>50<70);{
        printf("c\n");
    }
    return 0;
}
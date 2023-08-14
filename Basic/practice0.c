#include<stdio.h>
int main(){
    int marks;
    printf("enter the marks:");
    scanf("%d",&marks);//down program in the form of if else

    // if(marks>=0 && marks<=30){
    //     printf("fail");
    // }else if(marks>=30 && marks<=100){
    //     printf("pass");
    // }else{
    //     printf("not a valid number");
    // }
     
     /*down program is in the form of tenary*/
     marks <=30 ?printf("fail\n"):printf("pass");

     return 0;
}
#include<stdio.h>
int main(){
    int num;
    printf("enter the number:");
    scanf("%d",&num);

    if(num>=80){
        printf("excellent\n");
    
      if(num%2==0){
        printf("positive number\n");
      }else{
        printf("negative number\n");
      }
   } else{
        printf("good");
      }
      return 0;
}
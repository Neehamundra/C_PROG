#include<stdio.h>
int main(){
    //progarm to apply different operator
    int a=5-(1/4)*5;//arithematic operator
    int b=4==4;//relational operator
    int c=4!=5;
    int d=6>8,e;
     e+=a;//assignment operator
    printf("%d\n",b&&c);//relational operator && represent if both are true then only it represents as true
    printf("%d\n",c||d);//|| represent if any one of the statement is true it represent true
    printf("%d\n",!(5>1)&&(3>4));//! represent the opposite reaction i.e,true to false and false to true 
    return 0;



}
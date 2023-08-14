#include<stdio.h>
int main(){
    char days;//it can be in the form of charecter also and can also write in a num also
    printf("enter the days:");
    scanf("%c",&days);


    switch(days){
        case 'm':printf("monday\n");
        break;
        case 't':printf("tuesday\n");
        break;
        default:printf("not a valid day");
    }
    return 0;
}
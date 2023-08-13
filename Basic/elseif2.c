#include<stdio.h>
int main(){//uses of else if using logical and
    int age;
    printf("enter the age:");
    scanf("%d\n",&age);

    if(age>=18){
        printf("adults\n");
}
else if(age>13 && age<18){
    printf("teenager\n");
}
else{
    printf("child");
}
return 0;

}
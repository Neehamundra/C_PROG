//print the sum of n natural number
//also,print them in reverse
#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);

    int sum=0;
    for(int i=1, j=n; i<=n && j>=1; i++,j--){//we can create diff varaible in one loop{
     sum +=i;
     printf("%d\n",j);
    }

    printf("sum is %d\n",sum);//
    return 0;
}
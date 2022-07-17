#include<stdio.h>
int main()
{
    int num;
    printf("entera number");
    scanf("%d",&num);
    if((num&1)==0)
        printf("number is even");
    else
        printf("number is odd");
}
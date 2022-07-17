#include<stdio.h>
int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    if(num>99)
        printf("nunmber is a three digit number");
    else
        printf("number is not a three digit number");
}
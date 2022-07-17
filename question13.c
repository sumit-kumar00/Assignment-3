#include<stdio.h>
int main()
{
    int num;
    printf("enter a number ");
    scanf("%d",&num);
    if(num%2==0&&num%3==0)
    {
        printf("number is divisible by 3 and 2");
    }
    else
    {
        printf("number is not divisible by 3 an 2");
    }
}
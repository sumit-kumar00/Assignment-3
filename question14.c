#include<stdio.h>
int main()
{
    int num;
    printf("enter a number ");
    scanf("%d",&num);
    if(num%7==0||num%3==0)
    {
        printf("number is divisible to 7 or 3");
    }
    else
    {
        printf("number is not divisible by 7 or 3");
    }
}

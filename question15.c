#include<stdio.h>
int main()
{
    int a;
    printf("entera number");
    scanf("%d",&a);
    if(a>0)
    printf("number is positive");
    else if(a==0)
    printf("number is equal to zero");
    else
    printf("number is negative"); 
}
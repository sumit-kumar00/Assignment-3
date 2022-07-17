#include<stdio.h>
int main()
{
    int l,b,h;
    printf("enter the three sides of a triangle");
    scanf("%d%d%d",&l,&b,&h);
    if(l+b>h||b+h>l||l+h>b)
    {
        printf("it is a valid angle triangle");
    }
    else
    {
        printf("it is not a valid triangle");
    }
}
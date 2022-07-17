#include<stdio.h>
int main()
{
    float cp,sp;
    float per;
    printf("enter cost prize and selling prince");
    scanf("%f%f",&cp,&sp);
    per=cp/sp*100;
    printf("percentage is %f",per);
}
#include<stdio.h>

void main()
{
    int n,remainder,temp,reverse=0;
    printf("enter the number");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        remainder=n%10;
        reverse=reverse*10+remainder;
        n=n/10;
    }
    printf("the reverse of %d is %d",temp,reverse);

}
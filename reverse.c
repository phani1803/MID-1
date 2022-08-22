#include<stdio.h>

int main()
{
    int n,remainder,temp,reverse;
    printf("enter the number");
    scanf("%d",&n);
    temp=0;
    while(n>0)
    {
        remainder=n%10
        reverse=reverse*10+remainder
        n=n/10;
    }
    printf("the reverse of %d is %d",remainder,reverse);

return 0;
}
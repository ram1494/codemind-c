#include<stdio.h>
int rev(int n)
{
    int rev=0,r;
    while(n)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    return rev;
}
int main()
{
    int n;
    scanf("%d",&n);
    do
    {
        n+=rev(n);
    }while(n!=rev(n));
    printf("%d",n);
}
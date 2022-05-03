#include<stdio.h>
int rev(int n)
{
    int r,rev=0;
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
    int a,b;
    scanf("%d%d",&a,&b);
    int i;
    for(i=a;i<=b;i++)
    {
        if(i == rev(i))
        {
            printf("%d ",i);
        }
    }
    return 0;
}
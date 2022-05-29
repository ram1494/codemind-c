#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int i;
    if(n==1)
    {
        return 0;
    }
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int a,b,c=0;
    scanf("%d",&a);
    scanf("%d",&b);
    for(int i=a;i<=b;i++)
    {
        if(prime(i))
        {
            c++;
        }
    }
   printf("%d",c);
}
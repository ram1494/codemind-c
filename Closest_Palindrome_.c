#include<stdio.h>
int p(int num)
{
    int rev=0,temp=num,r;
    while(temp>0)
    {
        r=temp%10;
        rev=(rev*10)+r;
        temp=temp/10;
    }
    if(rev==num)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int a;
    scanf("%d",&a);
    int diff1=0,diff2=0,i,j;
    int p1,p2;
    for(i=a+1;i<=10000;i++)
    {
        if(p(i)==1)
        {
            diff1=i-a;
            p1=i;
            break;
        }
    }
    for(i=a-1;i>0;i--)
    {
        if(p(i)==1)
        {
            diff2=a-i;
            p2=i;
            break;
        }
    }
    if(diff1>diff2)
    {
        printf("%d",p2);
    }
    else if(diff2==diff1)
    {
        printf("%d %d",p2,p1);
    }
    else
    {
        printf("%d",p1);
    }
    return 0;
}
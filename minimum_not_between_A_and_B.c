#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],min=INT_MAX;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x,y;
    scanf("%d%d",&x,&y);
    for(int i=0;i<n;i++)
    {
        if(!(a[i]>=x && a[i]<=y))
        {
            if(min>a[i])
            {
                min=a[i];
            }
        }
    }
    if(min==INT_MAX)
    {
        printf("-1");
    }
    else
    {
        printf("%d",min);
    }
}
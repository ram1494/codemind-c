#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x,y,max=0,c=0;
    scanf("%d %d",&x,&y);
    for(int i=0;i<n;i++)
    {
        if (!(a[i]>=x && a[i]<=y))
        {
          if(max<a[i])
          {
              max=a[i];
              c++;
          }
        }
    }
    if(c==0)
    {
        printf("-1");
    }
    else
    {
    printf("%d",max);
    }
}
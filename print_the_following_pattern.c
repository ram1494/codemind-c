#include<stdio.h>
int main()
{
    int v,k,r,l,n;
    scanf("%d",&n);
    for(v=1;v<n+1;v++)
    {
        for(k=1;k<n-v+1;k++)
        {
            printf(" ");
        }
        for(r=1;r<2*v;r++)
        {
            printf("%d",v);
        }
        printf("
");
    }
}
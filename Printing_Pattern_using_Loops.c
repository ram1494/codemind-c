#include<stdio.h>
int main()
{
    int a[100][100],i,j,n,len,sum,end;
    scanf("%d",&n);
    sum=0;
    len=(2*n-1);
    end=len-1;
    if(n>=1 && n<=1000)
    {
        while(n!=0)
        {
            for(i=sum;i<=end;i++)
            {
                for(j=sum;j<=end;j++)
                {
                    if(i==sum||j==sum||i==end||j==end)
                    {
                        a[i][j]=n;
                    }
                }
            }
            sum++;
            end--;
            n--;
        }
    }
    for(i=0;i<len;i++)
    {
        for(j=0;j<len;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("
");
    }
}
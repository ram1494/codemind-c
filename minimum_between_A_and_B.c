#include<stdio.h>
int main(){
int n,min=9999;
scanf("%d",&n);
int a[n],i,c=0;
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
int x,y;
scanf("%d %d",&x,&y);
for(i=0;i<n;i++)
{
    if((a[i]>=x && a[i]<=y))
    {
        if(min>a[i])
        {
         min=a[i];   
        }
    }
}  
if(min==9999)
{
    printf("-1");
}
else
{
printf("%d",min);
}
}
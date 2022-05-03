#include<stdio.h>
int main()
{
    int L,B,W,C,area,tol_cost;
    scanf("%d%d%d%d",&L,&B,&W,&C);
    if((L<=2*W) || (B<=2*W))
      printf("Impossible");
      else{
          area=L*B-((L-2*W)*(B-2*W));
          tol_cost=area*C;
          printf("%d",tol_cost);
      }
    
}
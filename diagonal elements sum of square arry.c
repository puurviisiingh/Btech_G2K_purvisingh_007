#include <stdio.h>

int main() {
    int i,j,m,n,d=0;
   printf("enter row and column equal value");
   scanf("%d%d",&m,&n);
   if(m==n)
   {
       int a[m][n];
       printf("enter array");
       for(i=0;i<m;i++)
   {
       for(j=0;j<n;j++)
       {
           scanf("%d",&a[i][j]);
       }
   }
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
          if(i==j)
          {
               d=d+a[i][j];
          }
       }
   }
   
   printf("diagonal element addition is");
   printf("%d",d);
   }
   else
   {
       printf("diagonal elements not found in array as m!=n");
   }
    return 0;
}

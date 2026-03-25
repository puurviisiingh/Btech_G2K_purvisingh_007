#include <stdio.h>

int main() {
   int i,j,m,n;
   printf("enter row and column equal value");
   scanf("%d",&n);
   m=n-1;
   int a[n][n];
   printf("enter 1st array");
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           scanf("%d",&a[i][j]);
       }
   }
   int b[n][n];
   printf("enter 2nd array");
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           scanf("%d",&b[i][j]);
       }
   }
   int c[n][n];
   printf("addition of array");
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           c[i][j]=a[i][j]+b[i][j];
       }
   }
   int d[n][n];
   printf("multiplication of array");
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           d[i][j]=(a[i][j]*b[i][j]);
           if(m!=0)
           {
               d[i][j]= d[i][j]+(a[i][j+1]*b[i+1][j]);
               m--;
           }
           
       }
   }
   printf("addition of array");
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
          printf("%d",c[i][j]);
       }
   }
   printf("multiplication of array");
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
          printf("%d",d[i][j]);
       }
   }

    return 0;
}

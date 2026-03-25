#include <stdio.h>

int main() {
    // Write C code here
    int j,t,m;
    printf("enter no of elements");
     scanf("%d",&m);
     int a[m];
       printf("enter array");
       for(j=0;j<m;j++)
       {
           scanf("%d",&a[j]);
       }
       t=a[0];
       for(j=0;j<m;j++)
       {
           if(a[j]>t)
           {
               t=a[j];
           }
       }
        printf("largest element=%d",t);
       
       
   }
   

   

#include <stdio.h>
int main() {
    // Write C code here
    int j,m;
    printf("enter no of elements");
     scanf("%d",&m);
     int a[m];
       printf("enter array");
       for(j=0;j<m;j++)
       {
           scanf("%d",&a[j]);
       }
       printf("reverse of array");
       for(j=m-1;j>=0;j--)
       {
            printf("%d",a[j]);
       }      
   }
   

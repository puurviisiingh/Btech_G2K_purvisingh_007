#include<stdio.h>
#include<math.h>
int main()
{
    int i=0,d,r,s=0;
    printf("Enter a binary");
    scanf("%d",&d);
    while(d>0)
    {
        r=d%10;
        s=r*(int)pow(2,i)+s;
        d=d/10;
        i++;
    }
    printf("num in decimal is=%d",s);
}

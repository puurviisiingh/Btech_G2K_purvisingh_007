#include<stdio.h>
int main()
{
    int a,b,c,min;
    printf("enter 3 num");
    scanf("%d%d%d",&a,&b,&c);
    min=a<b?(b>c?b:c):(a>c?a:c);
    printf("max=%d",min);
    return 0;

}

#include<stdio.h>
int main()
{
    int y;
    printf("enter a year");
    scanf("%d",&y);
    if(y%4==0 && y%100!=0 )
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}

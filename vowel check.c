#include<stdio.h>
int main()
{
    char c;
    printf("enter a char");
    scanf("%c\n",&c);
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
    {
        printf("yes vowel");
    }
    else
    {
        printf("no vowel");
    }
    return 0;
}

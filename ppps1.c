#include <stdio.h>
int main() 
{

    float hindi,physics,maths,chemistry,sum,percentage;

    printf("enter number in hindi :");
    scanf("%f", &hindi);

    printf("enter number in physics :");
    scanf("%f", &physics);
    
    printf("enter number in maths :");
    scanf("%f", &maths);

    printf("enter number in chemistry :");
    scanf("%f", &chemistry);

    sum = hindi + physics + maths + chemistry;
    printf("sum %f\n",sum);
    return 0;

}

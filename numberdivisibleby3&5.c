#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    if(n%3==0 && n%5==0)
    {
        printf("The entered number is divisible by 3 and 5");
    }
    else if(n%5==0)
    {
         printf("The entered number is divisible by 5");
    }
    else if (n%3==0 )
    {
         printf("The entered number is divisible by 3 ");
    }
    else
    {
         printf("The entered number is not divisible by 3 and 5");
    }
}

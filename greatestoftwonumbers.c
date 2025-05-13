#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of a and b: ");
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        printf("number 'a' is greater than number 'b' ");
    }
    else
    {
        printf("number 'b' is greater than number 'a' ");
    }
}

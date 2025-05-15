#include<stdio.h>
int main()
{
    int a=5;
    int *b= &a;
    *b= *b+30;
    printf("a=%d\n",*b);
    printf("b=%d\n",*b);
}
    

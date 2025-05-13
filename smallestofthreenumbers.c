#include<stdio.h>
int main()
{
    int a, b , c;
    printf("Enter the value of a,b,c: ");
    scanf("%d%d%d",&a,&b,&c);
    if (a<b && a<c)
    {
        printf("number 'a' is smallest");
    }
    else if(b<a && b<c)
    {
        printf("number 'b' is smallest");
    }
    else
    {
       printf("number 'c' is smallest"); 
    }
}

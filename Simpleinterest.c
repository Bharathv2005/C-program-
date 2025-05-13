#include <stdio.h>

int main() {
    int y,p,r, output;
    printf("enter the year \n");
    scanf("%d",&y);
    printf("enter the amount \n");
    scanf("%d",&p);
    printf("enter the rate of interest \n");
    scanf("%d",&r);
    output=(y*p*r)/100;
    printf("the simple interest is %d");
}

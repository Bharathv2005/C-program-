#include<stdio.h>
int main(){
    int arr[10]={1,2,3,4,5},i;
    int *a=arr;
    for(i=0;i<5;i++){
        printf("%d\n",*(a+i));
        printf("%p\n",a+i);
    }
}

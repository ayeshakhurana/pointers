//write a code to swap 2 numbers using functions and by taking pointers as parameters
#include<stdio.h>
void swap(int *n, int *y){
    int t;
    t=*x;
    *=*y;
    *y=t;
    return;
}

int main(){
    int a=2,b=5;
    swap(&a,&b);
    printf("%d%d",a,b);
    return 0;
}
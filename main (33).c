//write a code to swap 2 numbers using pointers 
#include<stdio.h>
int main(){
    int a,b,*p,*q;
    scanf("%d%d",&a,&b);
    p&=a;
    q&=b;
    *p=*p+*q;
    *q=*p-*q;
    *p=*p-*q;
    printf("%d%d",& *p,& *q);
    return 0;
}
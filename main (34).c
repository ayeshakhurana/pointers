//write a code to add substract multiply and divide 2 numbers using pointers 
#include<tsdio.h>
int main(){
    int a ,b,*p,*q;
    scanf("%d%d",&a,&b);
    p&=a;
    q&=b;
    printf("addition= %d\n",& (*p+*q));
    printf("substraction = %d\n",& (*p-*q));
    printf("multiply = %d\n",& (*p * *q));
    printf("division = %d\n",& (*p / *q));
    return 0;
}
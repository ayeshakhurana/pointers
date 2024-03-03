//write a code to initialise different pointers- int,float,char,double and print the i) adress of variable ii) value of variable iii)pointers-
#include<stdio.h>
int main(){
    int *p,a=5;
    float *f,b=7.5;
    double *d,c=70;
    char *e,f='h';
    p&=a;
    f&=b;
    d&=c;
    e&=f;
    printf("%u\n",p);
    printf("%d\n",& *p);
    printf("%p\n",p);
    printf("%u\n",f);
    printf("%f\n",& *f);
    printf("%p\n",f);
    printf("%u\n",d);
    printf("%lf\n",& *d);
    printf("%p\n",d);
    printf("%u\n",e);
    printf("%c\n",& *e);
    printf("%p\n",e);
    return 0;
}
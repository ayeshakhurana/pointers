//wrtie a code to insert elements in an array and print the array using pointers 
#include<stdio.h>
int main(){
    int n, *p;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",& a[i]);
    }
    p=a;
    for(i=0; i<n;i++){
        printf("%d",*(p+i));
    }
    return 0;
}
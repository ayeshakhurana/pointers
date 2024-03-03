//write a code to insert eleents in an array and sort the elements in descending order by taking pointers as parameteres 
#include<stdio.h>
void sort(int n, int *p){
    int i,j,t;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(*(p+i) > *(p+j)){
            t=*(p+i);
            *(p+i)=*(p+j);
            *(p+j)=t;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d",*(p+i));
    }
}
int main(){
    int n=5;
    int a[5]={6,5,3,2,1}
    sort(n,a);
    return 0;
}
#include<stdio.h>
int main(){
    int i,j,k=0,l=1,c;
    printf("Enter the limit:");
    scanf("%d",&j);
    printf("The Fibonacci series upto the given limit is:\n");
    for(i=1;i<=j;i++){
        printf("%d ", k);
        c=k+l;
        k=l;
        l=c;
    }
    return 0;
}
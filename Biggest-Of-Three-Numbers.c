//program to find the biggest of three numbers.
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter number 1:");
    scanf("%d",&a);
    printf("Enter number 2:");
    scanf("%d",&b);
    printf("Enter number 3:");
    scanf("%d",&c);
    if(a>b&&a>c){
        printf("%d is the biggest number out of the given three numbers.",a);
    }else if(b>a&&b>c){
        printf("%d is the biggest number out of the given three numbers.",b);
    }else{
        printf("%d is the biggest number out of the given three numbers.",c);
    }
    return 0;
}
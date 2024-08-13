#include<stdio.h>
int fact(int x){
    if(x==0){
        return 1;
    }else{
        return x*fact(x-1);
    }
}
int main(){
    int a;
    printf("Enter the number to find the factorial of : ");
    scanf("%d", &a);
    printf("The factorial of the number %d is : %d",a,fact(a));
    return 0;
}
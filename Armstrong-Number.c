// armstrong number
#include<stdio.h>
#include<math.h>

int main(){
    int l,m,c=0,sum=0,d;
    printf("Enter number:");
    scanf("%d",&l);
    armstrong(l);
    return 0;
}
void armstrong(int n){
    int m,c=0,sum=0,d;
    m=n;
    while(n){
        n/=10;
        c++;
    }
    n=m;
    while(n){
        d=n%10;
        sum += pow(d,c);
        n/=10;
    }
    if(sum==m){
        printf("The number is an armstromg number.");
    }else{
        printf("The number is not a armstrong number.");
    }
}
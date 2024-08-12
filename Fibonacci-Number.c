#include<stdio.h>
int fab(int x){
    if(x==1){
        return 0;
    }else if(x==2){
        return 1;
    }else{
        return fab(x-1)+fab(x-2);
    }
}
int main(){
    int a;
    printf("Enter the terms you want to find in the series: ");
    scanf("%d",&a);
    printf("the %dth term of the series is %d",a,fab(a));
}
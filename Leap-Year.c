#include<stdio.h>
int main(){
    int i;
    printf("Ente the year: ");
    scanf("%d",&i);
    if(((i%4==0)&&(i%100!=0))||(i%400==0)){
        printf("It's a leap year.");
    }else{
        printf("It's not a leap year.");
    }
    return 0;
}

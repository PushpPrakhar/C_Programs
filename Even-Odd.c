// program to find if the number is even or not
#include <stdio.h>
int main(){
    int i;
    printf("Enter number:");
    scanf("%d",&i);
    if (i%2==0){
        printf("The number is EVEN.");
    }else{
        printf("The number is ODD.");
    }
    return 0;
}

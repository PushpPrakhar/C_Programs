#include<stdio.h>
int main(){
    int A1[10],m=0;
    printf("Enter the array: ");
    for(int i=0;i<10;i++){
        scanf("%d",&A1[i]);
    }
    for(int i=0;i<10;i++){
        if(A1[i]>m){
            m=A1[i];
        }
    }
    printf("The largest number in the array is %d",m);
    return 0;
}
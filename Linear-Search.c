#include<stdio.h>
int main(){
    int A1[10],item,pos,flag=0;
    printf("Enter the array: ");
    for(int i=0;i<10;i++){
        scanf("%d",&A1[i]);
    }
    printf("Enter number to be scanned : ");
    scanf("%d",&item);
    for(int i=0;i<10;i++){
        if(A1[i]==item){
            pos=i+1;
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("Not in array.");
    }else{
        printf("In the array at position %d",pos);
    }
    return 0;
}
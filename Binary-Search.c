//Ascending
#include<stdio.h>
int main(){
    int a[10],item,beg=0,end=9,mid;
    printf("Enter the elements of the array:");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    mid=(beg+end)/2;
    printf("Enter item to be searched:");
    scanf("%d",&item);
    while (beg<=end){
        if(a[mid]==item){
            printf("Search Successful at position %d",mid+1);
            break;
        }else if(a[mid]> item){
            end=mid-1;
        }else{
            beg=mid+1;
        }
        mid=(beg+end)/2;
    }
    return 0;
}
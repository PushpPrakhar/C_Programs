#include<stdio.h>
int main(){
    int i,j,n,t;
    printf("Enter the number of elementds in an array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Before bubble sorting:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("\nThe array after Bubble Sort is:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}
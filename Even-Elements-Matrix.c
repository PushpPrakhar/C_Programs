#include<stdio.h>
int main(){
    int a[3][3],i,j,count=0;
    printf("Enter the first matrix elements: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(a[i][j] % 2==0){
                count += 1;
            }

        }
        
    }
    printf("The number of Even Elements in the given 2D array are: %d",count);
    return 0;
}
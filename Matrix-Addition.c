#include<stdio.h>
int main(){
    int a[3][3],b[3][3],c[3][3],i,j;
    printf("Enter the first matrix elements: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the Second Matrix Elements: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            c[i][j]=a[i][j] + b[i][j];
        }
    }
    printf("The Sum of the Two Matrix is: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
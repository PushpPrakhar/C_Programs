#include<stdio.h>
void swap(int *x, int *y){
    *x=*x+*y;    
    *y=*x-*y;    
    *x=*x-*y;    
    printf("\nInside function a=%d b=%d\n",x,y);    

}
int main()    
{    
    int a,b;
    printf("Enter Two numbers:");
    scanf("%d %d",&a,&b);
    printf("Before swap a=%d b=%d",a,b);
    swap(&a,&b);
    printf("After swap a=%d b=%d",a,b);    
    return 0;
}   


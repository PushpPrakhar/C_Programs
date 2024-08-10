/*the program to calculate the area of different shapes */
# include <stdio.h>
#include <math.h>
const float pi = 3.14;
int square(int a)//a = side of square
{
    return a*a;
}

float sphere(float r)// r = radious of spphere
{
    return 4*pi*r*r;
}

int parallogram(int b, int h)// b= base, h= height
{
    return b*h;
}

int rhombus(int d1, int d2)//d1= digonal1, d2= digonal2
{
    return 0.5*d1*d2;
}

float ellipse(float x, float y)//x= x-axis, y= y-axis
{
    return pi*x*y;
}

float trapezoid(float base, float base2, float height){
    return (base+base2)*0.5*height;
}

//__mains__
int main()
{
    int i,p,j,k,s,d;
    float v,xaxis,yaxis,b1,b2,h1;
    printf("Select shape:\n");
    printf("1. Square\n");
    printf("2. Sphere \n");
    printf("3. Parallogram\n");
    printf("4. Rhombus\n");
    printf("5. Ellipse\n");
    printf("6. Trapezoid\n");
    printf("7. Exit\n");
    printf("Enter choice:");
    scanf("%d",&i);
    if (i==1){
        printf("Enter the side of Square:");
        scanf("%d",&p);
        printf("The area of square of side %d is %d\n",p,square(p));
        main();
    }else if(i==2){
        printf("Enter the radious of Sphere:");
        scanf("%f",&v);
        printf("The area of sphere of radious %f is %f\n",v,sphere(v));
        main();
    }else if(i==3){
        printf("Enter the base of parallogram:");
        scanf("%d",&j);
        printf("Enter the height of parallogram:");
        scanf("%d",&k);
        printf("The area of parallogram of base %d and height %d is %d\n",j,k,parallogram(j,k));
        main();
    }else if(i ==4){
        printf("Enter the digonal_1 of rhombus:");
        scanf("%d",&s);
        printf("Enter the dogonal_2 of rhombus:");
        scanf("%d",&d);
        printf("The area of Rhombus of digonal_1 %d and digonal_2 %d is %d\n",s,d,rhombus(s,d));
        main();
    }else if(i==5){
        printf("Enter the x_axis of ellipse:");
        scanf("%f",&xaxis);
        printf("Enter the y_axis of ellipse:");
        scanf("%f",&yaxis);
        printf("The area of Ellipse of x_axis %f and y_axis %f is %f\n",xaxis,yaxis,ellipse(xaxis,yaxis));
        main();
    }else if(i==6){
        printf("Enter the first base of trapezoid:");
        scanf("%f",&b1);
        printf("Enter the second base of trapezoid:");
        scanf("%f",&b2);
        printf("Enter the height of trapezoid:");
        scanf("%f",&h1);
        printf("The area of Trapezoid of base1 %f , base2  %f and height %f is %f\n",b1,b2,h1,trapezoid(b1,b2,h1));
        main();
    }else if(i==7){
        printf("Exiting the code............\n");
        printf("EXITED.");
    }else{
        printf("------WRONG INPUT------\n");
        main();
    }
    
}
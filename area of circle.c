#include<stdio.h>
#define PI 3.14
int main()
{
 float radius, area;
printf("Enter the radius of the circle: ");
scanf("%f",&radius);
area = PI*radius*radius;
printf("the area of circle with radius %.2f is:%.2f\n",radius,area);
return 0;

}
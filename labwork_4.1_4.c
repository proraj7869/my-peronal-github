#include<stdio.h>
int main ()
{
int x , y,temp;
x=10;
y=20;


 temp= x;
 x = y;
 y = temp;
 
printf("x = %d, y=%d\n",x , y); 
return 0;
}
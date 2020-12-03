#include<stdio.h>
int main()
{
float a,b,c;
printf("Enter the distance(in km)a=");
scanf("%f",&a);
b=a*1000;
printf("\nthe distance in metre=%f",b);
c=a*3280.8399;
printf("\nthe distance in feet=%f",c);
return 0;
}

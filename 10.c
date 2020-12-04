#include<stdio.h>
int main()
{
int U,V,D,t;
printf("Enter the speed(inkm/hr) of the first train U=\n");
scanf("%d",&U);
printf("Enter the speed(inkm/hr) of the second train V=\n");
scanf("%d",&V);
printf("The distance(in km) between both the trainD=\n");
scanf("%d",&D);
t=D/U+V;
printf("\nThe time(in hour) required by the train to meet each other=%d",t);
return 0;
}

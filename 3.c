#include<stdio.h>
int main()
{
int x,y;
printf("enter first and second integer respectively");
scanf("%d %d",&x,&y);
if(x>y)
 printf("\nThe no. pesent between the two nos are %d",x-y-1);
else
printf("\nThe no. pesent between the two nos are %d",y-x-1);
return 0;
}

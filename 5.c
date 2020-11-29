#include<stdio.h>
int main()
{
int x,thousand,ones,tenth,hundredth;
printf("enter any 4 gigit number\n");
scanf("%d",&x);
thousand=x/1000;
ones=x%10;
x=x/10;
tenth=x%10;
x=x/10;
hundredth=x%10;
printf("once place is=%d\n",ones);
printf("tens place is=%d\n",tenth);
printf("hundredth place=%d\n",hundredth);
printf("thousand place is=%d\n",thousand);
return 0;
}


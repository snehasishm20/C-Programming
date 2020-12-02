#include<stdio.h>
int main()
{ 
 float si,pa,ri,y,ci;
 printf("Enter the principal :");
 scanf("%f",&pa);
printf("Enter the rate:");
 scanf("%f",&ri);
printf("Enter the time :");
 scanf("%f",&y);
 si=pa*ri*y;
 ci=pa*(1+ri)*y;
printf("the simple interest is:%f \n",si);
printf("the compound interest is :%f \n",ci);
return 0;
}


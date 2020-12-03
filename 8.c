#include<stdio.h>
int main()
{
   float p1,t,m,e,c,p,b;
   printf("physics marks=");
    scanf("%f",&p);
     printf("English marks=");
    scanf("%f",&e);  
    printf("Maths marks=");
    scanf("%f",&m);
     printf("Computer marks=");
    scanf("%f",&c);
     printf("biology marks=");
    scanf("%f",&b);
   t=p+c+e+m+b;
   p1=t/5;
  printf("total marks obtained and percentage obtained=%f  %f",t,p1);
return 0;
}

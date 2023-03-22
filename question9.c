#include<stdio.h>
/* write a program to check whether a given number
is an Armstrong number or not ?
*/
int main()
{
int n,sum=0,r;
int x;
printf("enter is the number");
scanf("%d",&n);

    x=n;
   while(x!=0)
   {
     r=x%10;
     sum=sum+(r*r*r);
     x=x/10;
   }
   if(n==sum)
   printf("this is armstrong number");
   else
    printf("this is not armstrong numbers");


return 0;
}




#include<stdio.h>
/* write a program to print first N terms
 of Fibonacci series ?
*/
int main()
{
 int a=0,b=1,c,count=2;
 int n;
 printf("enter is the number");
 scanf("%d",&n);
 printf("%d\n",a);
 printf("%d\n",b);
 while(n>count)
 {
    c=a+b;
    count++;
    printf("%d\n",c);
    
    a=b;
    b=c;
 }

    return 0;
}
#include<stdio.h>
/* write a program to check whether a given number is there
in the Fibonacci series or not ?
*/
int main()
{
 int a=0,b=1,c,count=2;
 int flag=0;
     int x,n;
 printf("enter is the  fibonacci range:");
 scanf("%d",&n);
 printf("enter is the x");
 scanf("%d",&x);

 while(n>count)
 {
    c=a+b;
    count++;
    
    if(x==c)
    {
        flag=1;
        break;
    }
        a=b;
        b=c;
    
    
 }
 if(flag==1)
 printf("\nthis is fibonacci series" );
 else
 printf("this is not fibonacci serie");
 
 
    return 0;
}
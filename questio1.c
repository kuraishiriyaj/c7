#include<stdio.h>
/* write a program to find the Nth
term of the Fibonacci series ?
*/
int main()
{
  int a=0,b=1,c=0;
  int i,n;
  printf("enter is the n");
    scanf("%d",&n);
  for(i=2;i<=n;i++)
  {   
    c=a+b;
    a=b;
    b=c;

  }
  printf("the %dth fibonacci number is :%d",n,b);
  

    return 0;
}     
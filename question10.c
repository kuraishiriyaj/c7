#include<stdio.h>
/* write a program to print all Armstrong numbers under 1000 ?
*/
int main()
{

 int x,r;
 int n,sum;
 printf(" Armstrong number is:");
 
 for(n=1;n<=1000;n++)
 {      
    x=n;
    sum=0;
      while(x!=0)
      { 
        r=x%10;
        sum=sum+(r*r*r);
        x=x/10;
        
           
        


      }
      if(sum==n)
          {
      printf("%d\n",n);
          }
 }


    return 0;
}

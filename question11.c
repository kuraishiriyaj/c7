#include<stdio.h>
/* write a program to find the positon of first 1
in LSB ?

*/
int main()
{
 int a;int count=0;
 printf("enter is the number");
 scanf("%d",&a);
 while(a!=0)
 {
   count++;
   if(a&1==1)
     break;
     else
     a=a>>1;
     
     
      
 }
 printf("a=%d",count);
 

    return 0;
}
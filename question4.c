#include<stdio.h>
/* write a program to calculate HCF of 
two numbers ?
*/
int main()
{
int a,b;
int l;
printf("enter is the number a&b");
scanf("%d%d",&a,&b);
for(l=a<b?a:b;l>=1;l--)
 if(a%l==0&&b%l==0)
 {
  printf("%d",l);
  break;
 }
    return 0;
}
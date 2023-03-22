#include<stdio.h>
/* write a program to check whether two given numbers are 
co-prime numbers or not ?
*/
int main()
{
    int a,b,flag=0;
    printf("enter is the two number");
    scanf("%d%d",&a,&b);
   int min=a<b?a:b;
    int i;
    for(i=2;i<=min;i++)
    {
        if(a%i==0&&b%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    printf("this is not co_prime number");
    else
    
        printf("this is co_prime number");
    
    return 0;
    

    
    
}
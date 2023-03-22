
#include<stdio.h>
/* write a program to print all prime numbers
between two given numbers ?
*/
int main()
{
int N ,i;
int flag;
int a,b;
printf("enter is the a&b");
scanf("%d%d",&a,&b);

for(N=a;N<=b;N++)
{
    flag=0;
    for(i=2;i<N/2;i++)
    {
        if(N%i==0)
        {
        flag++;
        break;
        }
    }

if(flag==0 && N!=1)

    printf("%d\n",N);
    


}

return 0;
}
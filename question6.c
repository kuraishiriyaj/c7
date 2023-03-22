#include<stdio.h>
/* write a program to print all prime numbers under all 100 ?
*/
int main()
{
    int i,N;
    int flag;
    for(N=1;N<=100;N++)
    {
        flag=0;
        for(i=2;i<=N/2;i++)
        {
            if(N%i==0)
        {
              flag++;
              break;
        }
        }
        if(flag==0&&N!=1)
        printf("%d\n",N);


    }

    return 0;
}
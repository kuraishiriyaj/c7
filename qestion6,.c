
#include<stdio.h>
int main()
{
   int N=100,x=2;
   int i;
   
   while(N)
   {
     for(i=2;i<x;i++)
     
        if(x%i==0)
        
            break;
          
        
        if(x==i)
        {
        printf("%d\n",x);
        N--;
        }
        x++;
   }
  

return 0;
}

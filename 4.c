#include<stdio.h>
void main()
{
    	int n,i=1,f=1;
    	printf("\n Enter The Number:");
            scanf("%d",&n);
                //loop to calculate the factorial of a number
           do
          {
                f=f*i;
                 i++;
          }while(i<=n);
     
        printf("\n The Factorial of %d is %d" ,n,f);
}
 

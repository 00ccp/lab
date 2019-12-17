#include<stdio.h> 
 
float xpowern(float x,int n);
int main() 
{
    float x1=2.2; 
    int n1=2;
    printf("%f",xpowern(x1,n1)); 
    return 0; 
} 

float xpowern(float x,int n) 
{
    int i; 
    float res=x; 
    if(n==0)res=1.0; 
    for(i=1;i<n;i++)
    {
        res*=x;
    }
    return res; 
}
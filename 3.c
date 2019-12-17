#include<stdio.h>
void main(){
	int i=2;
	int sum =0;
	do{
		sum += i; //(sum = sum +i)
		i=i+3;
	}while(i<100);
	printf("\n sum of n natural numbers: %d\n\n", sum);
}

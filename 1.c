#include<stdio.h>
void main()
{
char ch;
printf("\n Press alphabet key or a Number Key:");
scanf("%c", &ch);

if(ch>='a' && ch<='z')
printf("\nUser entered %c is a lower case alphabet\n", ch);
	
if(ch>='A' && ch<='Z')
printf("\nUser entered %c is a upper case alphabet\n", ch);
 
if(ch>='1' && ch<='9')
printf("\nUser entered %c is a Number\n", ch);
}



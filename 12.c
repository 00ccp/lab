#include<stdio.h>
int main()
{
char instr[30],outstr1[15],outstr2[15];
int i=0,i1=0,i2=0;
scanf("%s",instr);
for(i=0;instr[i]!='\0';i++)
{
if(i%2==0)
{
outstr1[i1]=instr[i];
i1++;
}
else
{
outstr2[i2]+instr[i];
i2++;
}
}
outstr1[i1]='\0';
outstr2[i2]='\0';
printf("%s\n",outstr1);
printf("%s\n",outstr2);
}
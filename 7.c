 #include <stdio.h>
int main()
{   char input[3];
    int n=0;
    char ch,ch1,ch2;
    //Read three characters
    for (n=0; n < 3; n++)
    { scanf("%c", &ch);
      input[n]=ch;
      
    } 
    //three characters in array,  Expand and print
    ch1 = input[0];
    ch2 = input[2];
    while ( ch1 <= ch2)
     {
     printf("%c  %d\n", ch1, ch1);  // Print charcter and ASCII value
     ch1++;
     }
   return 0;
}

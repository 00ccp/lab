 #include <stdio.h>
int main()
{   char word[5];
    int n=0;
    char ch;
    //Read five characters
    for (n=0; n < 5; n++)
    { scanf("%c", &ch);
      word[n]=ch;
      
    }
    // Check first charcter
    if (word[0] >= 'a' && word[0] <= 'z') // lower case Check
    word[0] = word[0] - ('a' - 'A'); // lower case ASCII value > aupper case ASCCI by a fixed number
    for (n=0; n<5; n++)
    printf("%c", word[n]);
    return 0;
}

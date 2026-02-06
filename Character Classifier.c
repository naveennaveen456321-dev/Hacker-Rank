#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
   char a;
   scanf("%c",&a);
    if(a>=65 && a<=90)
    {
        printf("Uppercase Alphabet");
    }
    else if(a>=97 && a<=122)
    {
        printf("Lowercase Alphabet");
    }
    else if(a>=48 && a<=58)
    {
        printf("Digit");
    }
    else
    {
        printf("Special Character");
    }
    
    
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char str[20];
    scanf("%c",&ch);
    scanf("%s",&s);
    scanf(" %[^\n]%*c", str);
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s",str); 
    return 0;
}


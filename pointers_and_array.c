#include<stdio.h>

void putstr(char *s);
int main()
{
    char str[50];
    printf("Enter the string.\n");
    gets(str);
    putstr(str);
    return 0;
}

void putstr(char *s)
{
    register int t;

    /*Index s as an array*/
    for(t=0;s[t];t++)
    {
        printf("\nThe alphabets are %c\n",putchar(s[t]));
    }

    /*Access s as a pointer*/
    while(*s)
    {
        printf("\nThe alphabets are %c\n",putchar(*s++));
    }
}

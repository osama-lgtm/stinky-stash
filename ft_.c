#include <stdio.h>
#include "libft.h"
int ft_isalpha(char a)
{
    if ((a < 'z' && a > 'a') || (a <'Z' && a > 'A'))
        return 1;
    else
        return 0;
}

int ft_isdigit(char a)
{
    if(a > '0' && a < '9')
        return 1;
    else
        return 0;
}

int ft_isalnum(char a)
{
    if((a < 'z' && a > 'a') || (a <'Z' && a > 'A'))
        return 1;
    else if(a > '0' && a < '9')
        return 1;
    else
        return 0;
}

int ft_isascii(char a)
{
    if(a <= 127 && a >= 0)
        return 1;
    else
        return 0;
}

int ft_isprint(char a)
{
    if(a >= 32 && a <= 127)
        return 1;
    else
        return 0;
}

int ft_strlen(char *a)
{
    int i = 0;
    while(a[i] != '\0')
        i++;
    return i;
}

char ft_toupper(char a)
{
    if(a > 'a' && a < 'z')
        a -= 32;
    return a;
}

char ft_tolower(char a)
{
    if(a > 'A' && a < 'Z')
        a += 32;
    return a;
}

char ft_strcat(char *text, char *cat)
{
    int a = 0;
    int i = ft_strlen(text);
    while(cat[a] != '\0')
    {
        text[i + a] = cat[a];
        a++;
    }
    return &text;
}
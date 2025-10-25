#include "libft.h"

int int_len(int n)
{
    int len;
    if (n == -2147483648)
        return (11);
    if (n == 0)
        return (1);
    len = 0;
    if (n < 0)
    {
        n = n / 10;
        len += 2;
        n = (-1) * n;
    }
    while (n > 0)
    {
        n = n / 10;
        len++;
    }
    return (len);
}

char    *ft_itoa(int n)
{
    char    *str;
    int i;
    int size;

    i = int_len(n);
    size = i + 1;
    str = (char *)malloc(size * sizeof(char));
    if (!str)
        return (NULL);
    str[i] = '\0';
    if (n == -2147483648)
    {
        str[i - 1] = '8';
        i--;
        n = -214748364; 
    }
    if (n < 0)
    {
        str[0] = '-';
        n = (-1) * n;
    }
    if (n == 0)
        str[0] = '0';
    while (n > 0)
    {
        i--;
        str[i] = (n % 10) + 48;
        n = n / 10;   
    }
    
    return (str);
}
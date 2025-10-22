#include "libft.h"

int char_in(char c, const char *s)
{
    int i;

    i = 0;
    while (s[i])
    {
        if (s[i] == c)
            return (1);
        i++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int start;
    int end;
    char    *arr;
    int diff;

    i = 0;
    while (char_in(s1[i], set) && s1[i])
        i++;
    start = i;
    i = ft_strlen(s1) - 1;
    while (char_in(s1[i], set) && i >= 0)
        i--;
    end = i;
    diff = end - start;
    if (diff < 0)
        diff = -2;
    arr = (char *)malloc(diff + 2);
    if (!arr)
        return (NULL);
    i = 0;
    while (start <= end)
        arr[i++] = s1[start++];
    arr[i] = '\0';
    return (arr);
}
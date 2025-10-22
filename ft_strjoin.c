#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char    *arr;
    int i;
    int j;

    arr = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    if (!arr)
        return (NULL);
    j = 0;
    i = 0;
    while (s1[i])
    {
        arr[i] = s1[i];
        i++;
    }
    while (s2[j])
    {
        arr[i] = s2[j];
        i++;
        j++;
    }
    arr[i] = '\0';
    return (arr);
}
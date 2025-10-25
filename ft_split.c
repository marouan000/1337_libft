#include "libft.h"

int skip_sep(char const *s, char c, int i)
{
    while (s[i] && s[i] == c)
        i++;
    return (i);
}

int count_words(char const *s, char c)
{
    int i;
    int words;
    
    words = 0;
    i = skip_sep(s, c, 0);
    while (s[i])
    {
        if (s[i] == c)
        {
            words++;
            i = skip_sep(s, c, i);
        }
        else
            i++;
    }
    if (s[ft_strlen(s) - 1] != c)
        words++;
    return (words);
}

void    free_all(char **arr, int index)
{
    int i;

    i = 0;
    while (i <= index)
    {
        free(arr[i]);
        i++;
    }
    free(arr);
}

void    mallocing(char **arr, char const *s, char c)
{
    int i;
    int start;
    int index;

    index = 0;        
    i = skip_sep(s, c, 0);
    while(s[i])
    {
        start = i;
        while (s[i] != c && s[i])
            i++;
        arr[index] = (char *)malloc((i - start + 1) * sizeof(char));
        if (!&arr[index])
            free_all(arr, index);
        index++;
        i = skip_sep(s, c, i);
    }
}

char **ft_split(char const *s, char c)
{
    char    **arr;
    int i;
    int j;
    int index;
    int l_index;

    if (!(*s))
    {
        arr = (char **)malloc(1 * sizeof(char *));
        if (!arr)
            return (NULL);
        arr[0] = NULL;
        return (arr);
    }
    arr = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
    if (!arr)
        return (NULL);
    mallocing(arr, s, c);
    i = skip_sep(s, c, 0);
    j = 0;
    index = 0;
    while (s[i])
    {
        if (s[i] != c)
        {
            arr[index][j] = s[i];
            i++;
            j++;
        }
        else
        {
            arr[index][j] = '\0';
            i = skip_sep(s, c, i);
            index++;
            j = 0;
        }
    }
    l_index = index + 1;
    if (s[i - 1] != c)
        arr[index][j] = '\0';
    if (s[i - 1] == c)
        l_index = index;
    arr[l_index] = NULL;
    return (arr);
}

/*
the split takes a string and a sep character, it splits the words and store them in a 2d array
we should first count the words then malloc an array of size (char*) * num_of_words, then we will fill 
each pointer with the word in str by calculating again the start and the end of the wordin str
*/
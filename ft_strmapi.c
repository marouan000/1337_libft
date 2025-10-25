char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int    i;
    char            *arr;

    if (!s || !f)
        return (NULL);
    arr = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
    if (!arr)
        return (NULL);
    i = 0;
    while (s[i])
    {
        arr[i] = f(i, s[i]);
        i++;
    }
    arr[i] = '\0';
    return (arr);
}
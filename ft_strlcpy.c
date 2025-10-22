int ft_strlcpy(char *dst, const char *src, int dstsize)
{
    int i;

    i = 0;
    while (src[i] && i < dstsize - 1)
    {
        dst[i] = src[i];
        i++;
    }
    if (dstsize > 0)
        dst[i] = '\0';
    while (src[i])
        i++;
    return (i);
}
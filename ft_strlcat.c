unsigned long   ft_strlcat(char *dst, const char *src, int dstsize)
{
    int i;
    int j;
    int iLenDst;

    i = 0;
    while (dst[i])
        i++;
    iLenDst = i;
    j = 0;
    while (src[j] && i < dstsize - 1)
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    while (src[j])
        j++;
    if (dstsize > iLenDst)
        dst[i] = '\0';
    else
        iLenDst = dstsize;
    return ((unsigned long)(iLenDst + j));
}
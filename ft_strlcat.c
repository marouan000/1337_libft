unsigned long   ft_strlcat(char *dst, const char *src, int dstsize)
{
    unsigned long   i;
    unsigned long   j;
    unsigned long   iLenDst;
    unsigned long   ds;

    ds = (unsigned long)dstsize;
    i = 0;
    while (dst[i] && dstsize != 0)
        i++;
    iLenDst = i;
    j = 0;
    while (src[j] && i < ds - 1)
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    while (src[j])
        j++;
    if (ds > iLenDst)
    {
        dst[i] = '\0';
    }
    else
        iLenDst = ds;
    return (iLenDst + j);
}
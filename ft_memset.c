void    *ft_memset(void *b, int c, int len)
{
    unsigned char   *p;
    unsigned char   f_byte;
    int i;

    f_byte = (unsigned char)c;
    p = (unsigned char *)b;
    i = 0;
    while (i < len)
    {
        *(p++) = f_byte;
        i++;
    }
    return (b);
}
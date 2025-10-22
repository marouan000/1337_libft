void    ft_bzero(void *s, int n)
{
    unsigned char   *p; 
    
    p = (unsigned char *)s;
    while (n--)
        *(p++) = 0;
}
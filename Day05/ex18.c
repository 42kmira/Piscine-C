unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
    int     copied;
    int     null;

    null = 1;
    copied = -1;
    while (*dest && ++copied < size)
        dest++;
    if (copied > size - 1)
        null = 0;
    while (*src)
    {
        if (copied++ < size - 1)
            *dest++ = *src;
        src++;
    }
    if (null)
        *dest = '\0';
    return (copied);
}
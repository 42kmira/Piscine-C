unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int copied;

    copied = 0;
    while (*src)
    {
        if (copied++ < size - 1)
            *dest++ = *src;
        src++;
    }
    if (size > 0)
        *dest = '\0';
    return (copied);
}
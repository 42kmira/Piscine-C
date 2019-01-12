char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    char *head;

    head = dest;
    while (n-- > 0)
        if (*src)
            *dest++ = *src++;
        else
            *dest++ = '\0';
    return (head);
}
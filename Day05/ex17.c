char    *ft_strncat(char *dest, char *src, unsigned int nb)
{
    char *head;

    head = dest;
    while (*dest)
        dest++;
    while (*src && nb-- > 0)
        *dest++ = *src++;
    *dest = '\0';
    return (head);
}
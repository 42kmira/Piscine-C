char    *ft_strcat(char *dest, char *src)
{
    char *head;

    head = dest;
    while (*dest)
        dest++;
    while (*src)
        *dest++ = *src++;
    *dest = '\0';
    return (head);
}
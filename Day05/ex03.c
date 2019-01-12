char    *ft_strcpy(char *dest, char *src)
{
    char *head;

    head = dest;
    while (*src)
        *dest++ = *src++;
    *dest = '\0';
    return (head);
}
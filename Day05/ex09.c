char    *ft_strlowcase(char *str)
{
    char *head;

    head = str;
    while (*str)
    {
        if ('A' <= *str && *str <= 'Z')
            *str = *str + ('a' - 'A');
        str++;
    }
    return (head);
}
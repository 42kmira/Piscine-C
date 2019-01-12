char    *ft_strupcase(char *str)
{
    char *head;

    head = str;
    while (*str)
    {
        if ('a' <= *str && *str <= 'z')
            *str = *str + ('A' - 'a');
        str++;
    }
    return (head);
}
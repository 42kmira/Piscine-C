char    *ft_strrev(char *str)
{
    char *start;
    char *head;
    char holder;

    start = str;
    head = str;
    while (*str && str++);
    str = str - 1;
    while (start < str)
    {
        holder = *start;
        *start++ = *str;
        *str-- = holder;
    }
    return (head);
}
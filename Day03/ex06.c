int     ft_strlen(char *str)
{
    char *head;

    head = str;
    while (*str && str++);
    return (str - head);
}
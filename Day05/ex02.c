int     char_is_whitespace(char c)
{
    char *whitespaces;
    whitespaces = " \t\r\0";
    while (*whitespaces)
        if (c == *whitespaces++)
            return (1);
    return (0);
}

int     char_is_sign(char c, int *sign)
{
    *sign = 1;
    if (c == '+')
        *sign = 1;
    if (c == '-')
        *sign = -1;
    return (c == '+' || c == '-');
}

int     ft_atoi(char *str)
{
    int result;
    int sign;

    while (char_is_whitespace(*str++));
    sign = 1;
    if (char_is_sign(*str, &sign))
        str++;
    result = 0;
    while ('0' <= *str && *str <= '9')
        result = (result * 10) + (*str++ - '0');
    return (sign * result);
}
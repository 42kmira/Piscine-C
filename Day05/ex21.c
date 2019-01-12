int     ft_strlen(char *str) //Need to test out 0 case
{
    int c;

    c = 0;
    while (*str++ && (++c)); //Potential Memory out of bounds
    return (c);
}

int     char_is_whitespace(char c)
{
    char *whitespaces;
    whitespaces = " \t\r\0"; //What if base has whitespace characters?
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

int     char_is_base(char c, char* base, int *index)
{
    while (*base)
        if (c == *base++ && (*++index))
            return (1);
    return (0);
}

int     base_is_not_valid(char *base) //This one could use some work
{
    int i;
    int j;
    char current;

    i = 0;
    j = 0;
    while (*base)
    {
        i = ++j;
        current = *base;
        if (*base == '+' || *base == '-')
            return (1);
        while (i-- > 0)
            if (*--base == current)
                return (1);
        base = base + 1 + j;
    }
    if (j < 2)
        return (1);
    return (0);
}

int     ft_atoi_base(char *str, char *base)
{
    int result;
    int sign;
    int index;
    int base_num;

    if (base_is_not_valid(base))
        return (0);
    while (char_is_whitespace(*str++));
    sign = 1;
    if (char_is_sign(*str, &sign))
        str++;
    result = 0;
    base_num = ft_strlen(base);
    index = 0;
    while (char_is_base(*str, base, &index))
    {
        result = (result * base_num) + (index);
        index = 0;
    }
    return (sign * result);
}
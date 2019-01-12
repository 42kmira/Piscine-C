int     char_is_whitespace(char c)
{
    char *whitespaces;
    whitespaces = " \t\r\0";
    while (*whitespaces)
        if (c == *whitespaces++)
            return (1);
    return (0);
}

char    **ft_split_whitespaces(char *str)
{
    char    **result;
    int     total_words;
    int     prev;
    char    *head;

    head = str;
    total_words = 0;
    prev = ' ';
    while (*str)
        if (char_is_whitespace(prev) && !(char_is_whitespace(*str)))
            total_words++;
    str = head;
    result = (char **)(malloc(sizeof(result) * (total_words + 1)));
    while (*str)
        if (char_is_whitespace(prev) && !(char_is_whitespace(*str)))
            *result++ = str;
    *result = "\0";
    return (**result - total_words - 1);
}
//Future Tip see Day05 ex10
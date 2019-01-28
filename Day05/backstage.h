#include "../../Libraries/util/magi.c"
#include "../../Libraries/defense/str_guard.c"
#include "../../Libraries/defense/int_guard.c"
#include "../../Libraries/util/util_string.c"
#include "../../Libraries/random/rand.c"

#include <unistd.h>
#include <string.h>

#include "prologue-Day05.h"

#include "ex00.c"
#include "ex01.c"
#include "ex02.c"
#include "ex03.c"
#include "ex04.c"
#include "ex05.c"
#include "ex06.c"
#include "ex07.c"
#include "ex08.c"
#include "ex09.c"
#include "ex10.c"
#include "ex11.c"
#include "ex12.c"
#include "ex13.c"
#include "ex14.c"
#include "ex15.c"
// #include "ex16.c"
// #include "ex17.c"
// #include "ex18.c"
// #include "ex19.c"
// #include "ex20.c"
// #include "ex21.c"
// #include "ex22.c"
// #include "ex23.c"

void    test_ex00()
{
    str_attack((void *)ft_putstr, "void");
}

void    test_ex01()
{
    int_attack((void *)ft_putnbr, "void");
}

void    test_ex02()
{
    str_attack((void *)ft_atoi, "int");
}

void    test_03_helper(char *input)
{
    char *dest;
    dest = malloc(sizeof(*dest) * (str_len(input) + 1));
    dest = ft_strcpy(dest, input);
    printf("%s", dest);
    free(dest);
}

void    test_ex03()
{
    str_attack((void *)test_03_helper, "void");
}

void    test_04_helper(char *input)
{
    char *dest;
    int n;

    n = str_len(input);
    dest = malloc(sizeof(*dest) * (n + 1));
    n = rand_min_max(0, n);
    dest = ft_strncpy(dest, input, n);
    printf("n is %d, \"%s\" ", n, dest);
    free(dest);
}

void    test_ex04()
{
    str_attack((void *)test_04_helper, "void");
}

void    test_ex05()
{
    #define test05_size 16
    char *test[test05_size * 2] = {
        "SEEK",     "SEARCH_SPACE",
        "o\0",      "o\0",
        "o\0",      "xox\0",
        "o\0",      "xxo\0",
        "abc\0",    "abc\0",
        "abc\0",    " abc\0",
        "abc\0",    "zzyyxxww\0",
        "abc\0",    "zzabyabc\0",
        "abc\0",    "zzabcyabc\0",
        "abc\0",    "zzabyyab\0",
        "abac\0",   "abadabafabagabacabagabac\0",
        "\0",       "a\0",
        "\0",       "xxoxxo\0",
        "abcde\0",  "abc\0",
        "abc\0",    "\0",
        "\0",       "\0s"
    };

    int i;
    char *seek;
    char *search_space;
    i = 2;
    while (i < test05_size * 2)
    {
        seek = test[i];
        search_space = test[i + 1];
        printf("Seeking: \'%s\' in \'%s\'\n", seek, search_space);
        printf("Result:\t\'%s\'\t",  ft_strstr(search_space, seek));
        printf("Expected: \t\'%s\'\n\n", strstr(search_space, seek));
        i = i + 2;
    }
}

void    test_ex06()
{
    printf("There are different implentations of strcmp. Some will give three return values (-1, 0, 1)\n");
    printf("Others will give you the ASCII difference. All that is guaranteed is 0 and the correct\n");
    printf("direction of difference (positive or negative)\n\n");

    #define test06_size 9
    char *test[test06_size * 2] = {
        "1\0",      "1\0",
        "321\0",    "321\0",
        "3210\0",   "3214\0",
        "301\0",    "321\0",
        "021\0",    "321\0",
        "321\0",    "3210\0",
        "3210\0",   "321\0",
        "\0",       "21\0",
        "321\0",    "\0"
    };

    int i;
    char *src1;
    char *src2;
    i = 0;
    while (i < test06_size * 2)
    {
        src1 = test[i];
        src2 = test[i + 1];
        printf("Comparing: \'%s\' and \'%s\'\n", src1, src2);
        printf("Result:\t%d\t", ft_strcmp(src1, src2));
        printf("Expected: \t%d\n\n", strcmp(src1, src2));
        i = i + 2;
    }
}

void    test_ex07()
{
    #define test07_size 13
    char *test[test07_size * 3] = {
        "1\0",      "1\0",      "2",
        "321\0",    "321\0",    "4",
        "3210\0",   "3214\0",   "5",
        "301\0",    "321\0",    "4",
        "021\0",    "321\0",    "4",
        "321\0",    "3210\0",   "5",
        "3210\0",   "321\0",    "5",
        "\0",       "21\0",     "3",
        "321\0",    "\0",       "4",
        "\0",       "\0",       "0",
        "1\0",      "1\0",      "0",
        "12\0",     "10\0",     "1",
        "12\0",     "10\0",     "2"
    };

    int i;
    i = 0;
    while (i < test07_size * 3)
    {
        printf("Comparing: \'%s\' and \'%s\' with n: %d\n", test[i], test[i + 1], *test[i + 2] - '0');
        printf("Result:\t%d\t", ft_strncmp(test[i], test[i + 1], (*test[i + 2] - '0')));
        printf("Expected: \t%d\n\n", strncmp(test[i], test[i + 1], (*test[i + 2] - '0')));
        i = i + 3;
    }
}

void    test_ex08()
{
    str_attack_m((void *)ft_strupcase, "string");
}

void    test_ex09()
{
    str_attack_m((void *)ft_strlowcase, "string");
}

void    test_ex10()
{
    str_attack_m((void *)ft_strcapitalize, "string");
}

void    test_ex11()
{
    str_attack((void *)ft_str_is_alpha, "int");
}

void    test_ex12()
{
    str_attack((void *)ft_str_is_numeric, "int");
}

void    test_ex13()
{
    str_attack((void *)ft_str_is_lowercase, "int");
}

void    test_ex14()
{
    str_attack((void *)ft_str_is_uppercase, "int");
}

void    test_ex15()
{
    str_attack((void *)ft_str_is_printable, "int");
}

void    test_ex16()
{

}

void    test_ex17()
{

}

void    test_ex18()
{

}

void    test_ex19()
{

}

void    test_ex20()
{

}

void    test_ex21()
{

}

void    test_ex22()
{

}

void    test_ex23()
{

}
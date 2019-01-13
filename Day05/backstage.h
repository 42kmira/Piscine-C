#include "../../Libraries/util/magi.c"
#include "../../Libraries/defense/str_guard.c"
#include "../../Libraries/defense/int_guard.c"
#include "../../Libraries/util/util_string.c"
#include "../../Libraries/random/rand.c"

#include <unistd.h>

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
    srand(time(0));
    str_attack((void *)test_04_helper, "void");
}

void    test_ex05()
{
    //Test case is more involved.
}

void    test_ex06()
{

}

void    test_ex07()
{

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
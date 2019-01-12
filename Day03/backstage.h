#include "../../Libraries/util/magi.c"
#include "../../Libraries/defense/ptr_guard.c"
#include "../../Libraries/defense/str_guard.c"

#include "prologue-Day03.h"

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

#include <string.h>

void    test_ex00(void)
{
    int intended = 42;
    
    printf("The test for ft_ft.c ");
    pointer_check((void*)ft_ft, &intended, "int", 1);
}

void    test_ex01(void)
{
    int intended = 42;
    
    printf("The test for ft_ultimate_ft.c ");
    pointer_check((void*)ft_ultimate_ft, &intended, "int", 9);
}

void    test_ex02(void)
{
    int a = 21;
    int b = 42;
    printf("This is a: %d this is b: %d\n", a, b);
    ft_swap(&a, &b);
    printf("This is a: %d this is b: %d\n", a, b);
}

void    test_ex03(void)
{
    int a = 42;
    int b = 21;
    int div = 42;
    int mod = 42;
    printf("This is div: %d this is mod: %d\n", div, mod);
    ft_div_mod(a, b, &div, &mod);
    printf("This is div: %d this is mod: %d\n", div, mod);
}

void    test_ex04(void)
{
    int a = 42;
    int b = 21;
    printf("This is a: %d this is b: %d\n", a, b);
    ft_ultimate_div_mod(&a, &b);
    printf("This is a: %d this is b: %d\n", a, b);
}

void    test_ex05(void)
{
    str_attack((void *)ft_putstr, "void");
}

void    test_ex06(void)
{
    str_attack_expected((void *)ft_strlen, (void *)strlen, "int");
}

void    test_ex07(void)
{
    str_attack_m((void *)ft_strrev, "string");
}

void    test_ex08(void)
{
    str_attack_expected((void *)ft_atoi, (void *)atoi, "int");
}

void    test_ex09(void)
{
    ;
}
#include "../../Libraries/util/magi.c"
#include "../../Libraries/defense/int_guard.c"

#include "prologue-Day02.h"

#include "ex00.c"
#include "ex01.c"
#include "ex02.c"
#include "ex03.c"
#include "ex04.c"
#include "ex05.c"
#include "ex06.c"
#include "ex07.c"

void    test_00(void)
{
    ft_print_alpha();
}

void    test_01(void)
{
    ft_print_rev_alpha();  
}

void    test_02(void)
{
    ft_print_nums();
}

void    test_03(void)
{
    int_attack((void *)ft_is_neg, "void"); 
}

void    test_04(void)
{
    ft_print_comb();
}

void    test_05(void)
{
    ft_print_comb2();
}

void    test_06(void)
{
    int_attack((void *)ft_putnbr, "void"); 
}

void    test_07(void)
{
    int_attack((void *)ft_print_combn, "void");
}
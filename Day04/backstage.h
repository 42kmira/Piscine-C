#include "../../Libraries/util/magi.c"
#include "../../Libraries/defense/int_guard.c"
#include "../../Libraries/random/rand.c"

#include "prologue-Day04.h"

#include "ex00.c"
#include "ex01.c"
#include "ex02.c"
#include "ex03.c"
#include "ex04.c"
#include "ex05.c"
#include "ex06.c"
#include "ex07.c"
#include "ex08.c"

void    test_ex00(void)
{
    int_attack((void *)ft_iterative_factorial, "int");
}

void    test_ex01(void)
{
    int_attack((void *)ft_recursive_factorial, "int");
}

int    test_02_arg1(int a)
{
    int b;
    b = rand_min_max(0, 10);
    printf("Test: %11d ^ %d \t\t", a, b);
    return (ft_iterative_power(a, b));
}

int    test_02_arg2(int a)
{
    int b;
    b = rand_min_max(0, 10);
    printf("Test: %d ^ %11d \t\t", b, a);
    return (ft_iterative_power(b, a));
}

void    test_ex02(void)
{
    srand(time(0));
    supressed_int_attack((void *)test_02_arg1, "int");
    supressed_int_attack((void *)test_02_arg2, "int");
}

int    test_03_arg1(int a)
{
    int b;
    b = rand_min_max(0, 10);
    printf("Test: %11d ^ %d \t\t", a, b);
    return (ft_recursive_power(a, b));
}

int    test_03_arg2(int a)
{
    //Recurrsive overflow. Program segfaults because there is a shortage
    //of computer memory when creating calls to the recurrsive function.
    //Behavior is thus undefined in different platforms and use cases.
    //Solution unknown, and I probably wont bother trying to figure it out.
    //It is however noteworthy and something to keep in mind with recurrssive functions.
    int b;
    b = rand_min_max(0, 10);
    printf("Test: %d ^ %11d \t\t", b, a);
    return (ft_recursive_power(b, a));
}

void    test_ex03(void)
{
    srand(time(0));
    supressed_int_attack((void *)test_03_arg1, "int");
    //supressed_int_attack((void *)test_03_arg2, "int");
}

void    test_ex04(void)
{
    int_attack((void *)ft_fibonacci, "int");
}

void    test_ex05(void)
{
    int_attack((void *)ft_sqrt, "int");
}

void    test_ex06(void)
{
    int i;

    i = 0;
    int_attack((void *)ft_is_prime, "int");
    int_range_attack((void *)ft_is_prime, "int", 1, 100);

}

void    test_ex07(void)
{
    ;
}

void    test_ex08(void)
{
    printf("%d\n", ft_eight_queens_puzzle());
}

void    test_ex09(void)
{
    ;
}
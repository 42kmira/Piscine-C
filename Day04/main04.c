/**************************************************************
 * FILENAME:    main04.c            REF: SP_PI42_Day04
 *
 * DESCRIPTION:
 *      Executatble test suite of Piscine Day04 files.
 *
 * ENVIRONMENT:
 *      Windows 10 Home v1803 x64
 *      Visual Studio Code 1.30
 *          Extensions: danielpinto8zz6.c-cpp-compile-run
 *      Installs: mingw-get 0.6.3
 * 
 * AUTHOR(s):
 *      Kevin Colour
 *
 * DATES:
 *      Created: 11Jan2019          Verified Execute: 11Jan2019
 *
****************************************************************/

#include "backstage.h"

int main(void)
{
    test_ex00();            //ex00 score: PASS
    nl();
    test_ex01();            //ex01 score: PASS
    nl();
    test_ex02();            //ex02 score: PASS
    nl();
    test_ex03();            //ex03 score: PASS
    nl();
    test_ex04();            //ex04 score: PASS
    nl();
    test_ex05();            //ex05 score: PASS
    nl();
    test_ex06();            //ex06 score: Awaiting Score
    nl();
    test_ex07();            //ex07 score: ZERO
    nl();
    test_ex08();            //ex08 score: MAX
    nl();
    test_ex09();            //ex09 score: ZERO
    nl();

    printf("No test segfaulted\n");
    return (0);
}
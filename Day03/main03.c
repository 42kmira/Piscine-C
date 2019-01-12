/**************************************************************
 * FILENAME:    main03.c            REF: SP_PI42_Day03
 *
 * DESCRIPTION:
 *      Executatble test suite of Piscine Day03 files.
 *
 * ENVIRONMENT:
 *      Windows 10 Home v1803 x64
 *      Visual Studio Code 1.30
 *          Extensions: danielpinto8zz6.c-cpp-compile-run
 *      Installs: mingw-get 0.6.3
 *
 * NOTES:
 *      Due to the way pointers work, if the test suite
 *      doesn't print out 'No test segfaulted' then that means
 *      you segfaulted somewhere.
 * 
 * AUTHOR(s):
 *      Kevin Colour
 *
 * DATES:
 *      Created: 21Dec2018          Verified Execute: 09Jan2018
 *
****************************************************************/

#include "backstage.h"

int main(void)
{
    test_ex00();            //ex00 score: MAX
    nl();
    test_ex01();            //ex01 score: MAX
    nl();
    test_ex02();            //ex02 score: MAX
    nl();                   //but see compliant
    test_ex03();            //ex03 score: MAX
    nl();
    test_ex04();            //ex04 score: MAX
    nl();
    test_ex05();            //ex05 score: MAX
    nl();
    test_ex06();            //ex06 score: MAX
    nl();
    test_ex07();            //ex07 score: MAX
    nl();
    test_ex08();            //ex08 score: MAX
    nl();
    test_ex09();            //ex00 score: ZERO
    
    printf("No test segfaulted!\n");
    return (0);
}
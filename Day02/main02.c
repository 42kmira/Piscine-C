/**************************************************************
 * FILENAME:    main02.c            REF: SP_PI42_Day02
 *
 * DESCRIPTION:
 *      Executatble test suite of Piscine Day02 files.
 *
 * ENVIRONMENT:
 *      Windows 10 Home v1803 x64
 *      Visual Studio Code 1.30
 *          Extensions: danielpinto8zz6.c-cpp-compile-run
 *      Installs: mingw-get 0.6.3
 *
 * NOTES:
 *      None.
 *
 * AUTHOR(s):
 *      Kevin Colour
 *
 * DATES:
 *      Created: 20Dec2018          Verified Execute: 09Jan2019
 *
****************************************************************/

#include "backstage.h"

int main(void)
{
    test_00();          //ex00 score: MAX
    nl();
    test_01();          //ex01 score: MAX
    nl();
    test_02();          //ex02 score: MAX
    nl(1);
    test_03();          //ex03 score: MAX
    nl();
    test_04();          //ex04 score: MAX
    nl(1);
    //test_05();          //ex05 score: MAX
    nl(1);
    test_06();          //ex06 score: PASS
    nl();               //See ex06 for more detials.
    //test_07();          //ex07 score: MAX
    return (0);
}
/*         <<<<<           COMPLAINT           >>>>>         
 *
 *      By: Kevin Colour
 * 
 *      There are three ways I could to do a swap. 
 * 
 *      1. Bitwise swap
 *      2. Addition swap
 *      2. Temporary Holder
 * 
 *      However there are mixed reviews as to which method is
 *      better, preforms better. Bitwise and Addition swap may
 *      be faster in some cpu architectures due to the way
 *      low level operations had been implemented. 
 * 
 *      Typically bitwise operations are faster than addition
 *      but most modern architectures have implentations that 
 *      allow these operations to be done on a single CPU cycle.
 * 
 *      This however is not the end of the story. Due to the nature
 *      of preprocessors and complier optimizations using a temporary
 *      variable may be sufficiently efficient. Modern compliers will
 *      preform some sort of trickery, xchg instruction, which in some
 *      architectures such as x86 may prove faster.
 * 
 *      Authors note: In terms of readability, all of them make sense. 
 *      When adding two things together in a computer you are virtually
 *      making a copy, i.e what is being added isn't destroyed. Upon seeing
 *      this the first swap using addition is easy to understand and then other. 
 *      With a bitwise swap you are 'adding' the bytes, I see it as layering the
 *      bytes on top of one another i.e. using XOR (int) operation is like
 *      applying a 90 degree polarized filter.
 * 
 *      A warning though! Using addition or bitwise method may fail and cause
 *      a lot of frustration if the same pointer is used; and so these methods
 *      require an additional step: checking to see if it is the same data.
 *      
/          <<<<<              END              >>>>>         */

void    ft_swap(int *a, int *b)
{
    int holder;

    holder = *a;
    *a = *b;
    *b = holder;
}

void    ft_swap1(int *a, int *b)
{
    if (!(*a ^ *b))
        return ;
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

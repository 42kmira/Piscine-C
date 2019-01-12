/*         <<<<<           COMPLAINT           >>>>>         
 *
 *      By: Kevin Colour
 * 
 *      Not sure how to make a general way to handle
 *      overflows. In this case it is done by specific test
 *      but the programmer needs to run test to find out
 *      what is the 'magic' number that causes the overflow.
 * 
 *      In certain cases you can just reverse the function but
 *      that isn't always easy, or possible. 
 *      
/          <<<<<              END              >>>>>         */

int     ft_iterative_factorial(int nb)
{
    int result;

    result = 1;
    if (nb <= 0 || nb > 12)
        return (0);
    while (nb > 1)
        result *= nb--;
    return (result);
}
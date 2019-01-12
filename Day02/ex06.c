/*         <<<<<           COMPLAINT           >>>>>         
 *
 *      By: Kevin Colour
 * 
 *      Wondering if this is a good approach to this problem.
 * 
 *      At least all of the recurrsive calls are used.
 *      Unsigned int witchcraft in line 22 when 
 *          LOWEST_INT is passed.
 * 
/          <<<<<              END              >>>>>         */

void ft_putnbr(int nb)
{
    unsigned int num;

    if (nb < 0)
    {
        ft_putstr("-", 1);
        num = -1 * nb;
    }
    else
        num = nb;
    if (num < 10 && (num = num + '0'))
        ft_putstr(&num, 1);
    else
    {
        ft_putnbr(num / 10);
        num = (num % 10) + '0';
        ft_putstr(&num, 1);
    }
}
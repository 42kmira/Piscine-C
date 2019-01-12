/*         <<<<<           COMPLAINT           >>>>>         
 *
 *      By: Kevin Colour
 * 
 *      Instead of doing `return ;` on line 16,
 *      we should print something out or use the abort()
 *      function.
 *      
/          <<<<<              END              >>>>>         */

void    ft_ultimate_div_mod(int *a, int *b)
{
    int holder;

    if (!b)
        return ;
    holder = *a;
    *a = holder / *b;
    *b = holder % *b;
}
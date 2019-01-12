/*         <<<<<           COMPLAINT           >>>>>         
 *
 *      By: Kevin Colour
 * 
 *      Instead of doing `return ;` on line 14,
 *      we should print something out or use the abort()
 *      function.
 *      
/          <<<<<              END              >>>>>         */

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    if (!b)
        return ;
    *div = a / b;
    *mod = a % b;
}
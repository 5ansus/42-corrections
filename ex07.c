#include <stdio.h>
void ft_putnbr(int nb);

int	main(void){
    int n = -10;
    while(n <= 10){
        ft_putnbr(n);
        printf(": I tried to write %d\n", n);
        n++;
    }
    n =  2147483647;
    ft_putnbr(n);
    printf(": I tried to write %d\n ", n);
    n =  -2147483648;
    ft_putnbr(n);
    printf(": I tried to write %d\n", n);
    return 0;
}
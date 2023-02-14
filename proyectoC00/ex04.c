#include <stdio.h>
void ft_is_negative(int n);

int	main(void){
    int n = -10;
    while(n <= 10){
        ft_is_negative(n);
        printf(": is returned when used with %d\n ", n);
        n++;
    }
    n =  2147483647;
    ft_is_negative(n);
    printf(": is returned when used with %d\n ", n);
    n =  -2147483648;
    ft_is_negative(n);
    printf(": is returned when used with %d\n ", n);
	return 0;
}
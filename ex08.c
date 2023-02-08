#include <stdio.h>
void ft_print_combn(int n);

int	main(void){
    int i, n = -1;
    while(n <= 10){
        printf("For N = %d \n", n);
        ft_print_combn(n);
        printf("\n");
        n++;
    }
	return 0;
}
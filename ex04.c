#include <stdio.h>
void ft_is_negative(int n);

int	main(void){
    int i, n = -10;
    while(n <= 10){
        printf("The number %d is: ", n);
        ft_is_negative(n);
        printf("\n");
        n++;
    }
	return 0;
}
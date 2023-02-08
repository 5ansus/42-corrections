void ft_putnbr(int nb);

int	main(void){
    int i, n = -10;
    while(n <= 10){
        printf("The number %d is orinted like: ", n);
        ft_putnbr(n);
        printf("\n");
        n++;
    }
    n =  2147483647;
    printf("Case of INT_MAX: %d is orinted like: ", n);
    ft_putnbr(n);
    n =  -2147483648;
    printf("Case of INT_MIN: %d is orinted like: ", n);
    ft_putnbr(n);
    return 0;
}
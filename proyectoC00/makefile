all: test0 test1 test2 test3 test4 test5 test6 test7 test8

init:
	cp * ./../../
	cd ..
	cd ..

norminette:
	norminette ex00/ft_putchar.c
	norminette ex01/ft_print_alphabet.c
	norminette ex02/ft_print_reverse_alphabet.c
	norminette ex03/ft_print_numbers.c
	norminette ex04/ft_is_negative.c
	norminette ex05/ft_print_comb.c
	norminette ex06/ft_print_comb2.c
	norminette ex07/ft_putnbr.c
	norminette ex08/ft_print_combn.c

test0:
	gcc -Wall -Wextra -Werror ex00.c ex00/ft_putchar.c -o test0

test1:
	gcc -Wall -Wextra -Werror ex01.c ex01/ft_print_alphabet.c -o test1

test2:
	gcc -Wall -Wextra -Werror ex02.c ex02/ft_print_reverse_alphabet.c -o test2

test3:
	gcc -Wall -Wextra -Werror ex03.c ex03/ft_print_numbers.c -o test3

test4:
	gcc -Wall -Wextra -Werror ex04.c ex04/ft_is_negative.c -o test4

test5:
	gcc -Wall -Wextra -Werror ex05.c ex05/ft_print_comb.c -o test5

test6:
	gcc -Wall -Wextra -Werror ex06.c ex06/ft_print_comb2.c -o test6

test7:
	gcc -Wall -Wextra -Werror ex07.c ex07/ft_putnbr.c -o test7

test8:
	gcc -Wall -Wextra -Werror ex08.c ex08/ft_print_combn.c -o test8

removeCs:
	rm *.c

removeOuts:
	rm test*

clean: removeOuts removeCs

delete:
	rm -rd 42-corrections
	rm makefile

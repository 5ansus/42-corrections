all:
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
	gcc -Wall -Wextra -Werror ex00.c ex00/ft_putchar.c -o ejercicio0.out
	./ejercicio0.out

test1:
	gcc -Wall -Wextra -Werror ex01.c ex01/ft_print_alphabet.c -o ejercicio1.out
	./ejercicio1.out

test2:
	gcc -Wall -Wextra -Werror ex02.c ex02/ft_print_reverse_alphabet.c -o ejercicio2.out
	./ejercicio2.out

test3:
	gcc -Wall -Wextra -Werror ex03.c ex03/ft_print_numbers.c -o ejercicio3.out
	./ejercicio3.out

test4:
	gcc -Wall -Wextra -Werror ex04.c ex04/ft_is_negative.c -o ejercicio4.out
	./ejercicio4.out

test5:
	gcc -Wall -Wextra -Werror ex05.c ex05/ft_print_comb.c -o ejercicio5.out
	./ejercicio5.out

test6:
	gcc -Wall -Wextra -Werror ex06.c ex06/ft_print_comb2.c -o ejercicio6.out
	./ejercicio6.out

test7:
	gcc -Wall -Wextra -Werror ex07.c ex07/ft_putnbr.c -o ejercicio7.out
	./ejercicio7.out

test8:
	gcc -Wall -Wextra -Werror ex08.c ex08/ft_print_combn.c -o ejercicio8.out
	./ejercicio8.out

removeCs:
	ex00.c
	ex01.c
	ex02.c
	ex03.c
	ex04.c
	ex05.c
	ex06.c
	ex07.c
	ex08.c

removeOuts:
	./ejercicio0.out
	./ejercicio1.out
	./ejercicio2.out
	./ejercicio3.out
	./ejercicio4.out
	./ejercicio5.out
	./ejercicio6.out
	./ejercicio7.out
	./ejercicio8.out

clean: removeOuts removeCs

alltest: test0 test1 test2 test3 test4 test5 test6 test7 test8

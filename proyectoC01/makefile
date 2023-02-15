all:

norminette:
	norminette ex01/ft_ultimate_ft.c
	norminette ex02/ft_swap.c
	norminette ex03/ft_div_mod.c
	norminette ex04/ft_ultimate_div_mod.c
	norminette ex05/ft_putstr.c
	norminette ex06/ft_strlen.c
	norminette ex07/ft_rev_int_tab.c
	norminette ex08/ft_sort_int_tab.c

test0:
	gcc -Wall -Wextra -Werror ex00.c ex00/ft_ft.c -o test0
	./test0

test1:
	gcc -Wall -Wextra -Werror ex01.c ex01/ft_ultimate_ft.c -o test1
	./test1

test2:
	gcc -Wall -Wextra -Werror ex02.c ex02/ft_swap.c -o test2
	./test2

test3:
	gcc -Wall -Wextra -Werror ex03.c ex03/ft_div_mod.c -o test3
	./test3

test4:
	gcc -Wall -Wextra -Werror ex04.c ex04/ft_ultimate_div_mod.c -o test4
	./test4

test5:
	gcc -Wall -Wextra -Werror ex05.c ex05/ft_putstr.c -o test5
	./test5

test6:
	gcc -Wall -Wextra -Werror ex06.c ex06/ft_strlen.c -o test6
	./test6

test7:
	gcc -Wall -Wextra -Werror ex07.c ex07/ft_rev_int_tab.c -o test7
	./test7

test8:
	gcc -Wall -Wextra -Werror ex08.c ex08/ft_sort_int_tab.c -o test8
	./test8

removeCs:
	rm *.c

removeOuts:
	rm test*

clean: removeOuts removeCs

alltest: test0 test1 test2 test3 test4 test5 test6 test7 test8

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex07.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanferna <sanferna@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:50:51 by sanferna          #+#    #+#             */
/*   Updated: 2023/02/16 12:31:59 by sanferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	x[] = {0, 1, 2, 3, 4, 5};
	int	y[] = {5, 6, 7, 8, 9};
	int i;
	printf("PRE FUNCION - Reverse\n");
	printf("x: ");
	for(i = 0; i < 6; i++)
	{
		printf("%d", x[i]);
		if(i == 5)
			printf("\n");
		else
			printf(", ");
	}
	printf("y: ");
	for(i = 0; i < 5; i++)
	{
		printf("%d", y[i]);
		if(i == 4)
			printf("\n");
		else
			printf(", ");
	}
	ft_rev_int_tab(x, 6);
	ft_rev_int_tab(y, 5);
	printf("POST FUNCION - Reverse\n");
	printf("x: ");
	for(i = 0; i < 6; i++)
	{
		printf("%d", x[i]);
		if(i == 5)
			printf("\n");
		else
			printf(", ");
	}
	printf("y: ");
	for(i = 0; i < 5; i++)
	{
		printf("%d", y[i]);
		if(i == 4)
			printf("\n");
		else
			printf(", ");
	}
	return 0;
}

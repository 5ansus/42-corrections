/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex08.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanferna <sanferna@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:50:51 by sanferna          #+#    #+#             */
/*   Updated: 2023/02/16 12:36:33 by sanferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	x[] = {7, 3, 9, 1, 4, 2};
	int	y[] = {88, 16, 71, 8, 19};
	int i;
	printf("PRE FUNCION - Sort\n");
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
	ft_sort_int_tab(x, 6);
	ft_sort_int_tab(y, 5);
	printf("POST FUNCION - Sort\n");
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

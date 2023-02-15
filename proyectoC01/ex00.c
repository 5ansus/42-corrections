/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanferna <sanferna@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:50:51 by sanferna          #+#    #+#             */
/*   Updated: 2023/02/15 15:56:09 by sanferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_ft(int *nbr);

int	main(void)
{
	int	x = -25;
	int	y = 1000;
	int	*puntero_x = &x;

	printf("PRE FUNCION\n");
	printf("Valor de x: %d -- Valor de y: %d\n", x, y);
	ft_ft(puntero_x);
	ft_ft(&y);
	printf("POST FUNCION\n");
	printf("Valor de x: %d -- Valor de y: %d\n", x, y);

	return 0;
}

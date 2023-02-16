/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanferna <sanferna@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:50:51 by sanferna          #+#    #+#             */
/*   Updated: 2023/02/15 15:56:09 by sanferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	x = 0;
	int	y = 0;

	printf("PRE FUNCION - División de 103 y 5\n");
	printf("Valor del cociente: %d -- Valor del resto: %d\n", x, y);
	ft_div_mod(103, 5, &x, &y);
	printf("POST FUNCION - División de 103 y 5\n");
	printf("Valor del cociente: %d -- Valor del resto: %d\n", x, y);

	return 0;
}

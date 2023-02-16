/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanferna <sanferna@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:50:51 by sanferna          #+#    #+#             */
/*   Updated: 2023/02/15 15:56:09 by sanferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	x = 103;
	int	y = 5;

	printf("PRE FUNCION - División de 103 y 5\n");
	printf("Valor del cociente: %d -- Valor del resto: %d\n", x, y);
	ft_div_mod(&x, &y);
	printf("POST FUNCION - División de 103 y 5\n");
	printf("Valor del cociente: %d -- Valor del resto: %d\n", x, y);

	return 0;
}

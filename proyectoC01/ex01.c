/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanferna <sanferna@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:50:51 by sanferna          #+#    #+#             */
/*   Updated: 2023/02/15 15:56:09 by sanferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	x = 0;
	int *puntero1 = &x;
	int **puntero2 = &puntero1;
	int ***puntero3 = &puntero2;
	int ****puntero4 = &puntero3;
	int *****puntero5 = &puntero4;
	int ******puntero6 = &puntero5;
	int *******puntero7 = &puntero6;
	int ********puntero8 = &puntero7;
	int *********puntero9 = &puntero8;

	printf("PRE FUNCION - 9ºPuntero\n");
	printf("Valor de x: %d\n", x);
	ft_ultimate_ft(puntero9);
	printf("POST FUNCION - 9ºPuntero\n");
	printf("Valor de x: %d\n", x);

	return 0;
}

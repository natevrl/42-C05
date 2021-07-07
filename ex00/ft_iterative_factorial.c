/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 10:36:52 by nbenhado          #+#    #+#             */
/*   Updated: 2021/07/07 11:47:38 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
	int	i;
	int sauvegarde = 1;
	i = 1;
	if (nb == 1 || nb == 0)
		return (1);
	while (i <= nb)
	{
		sauvegarde *= i;
		i++;
	}
	return (sauvegarde);
}

#include <stdio.h>

int	main(void)
{
	printf("0:%d\n", ft_iterative_factorial(-10));
	printf("0:%d\n", ft_iterative_factorial(-1));
	printf("1:%d\n", ft_iterative_factorial(0));
	printf("1:%d\n", ft_iterative_factorial(1));
	printf("3628800:%d\n", ft_iterative_factorial(130));
	printf("6:%d\n", ft_iterative_factorial(3));
}

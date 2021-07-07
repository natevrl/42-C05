/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 10:38:11 by nbenhado          #+#    #+#             */
/*   Updated: 2021/07/07 13:55:45 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	int i = 1;
	int stack = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (i < power)
	{
		nb *= stack;
		i++;
	}
	return nb;
}

#include <stdio.h>


int	main(void)
{
	printf("0:%d\n", ft_iterative_power(1, -10));
	printf("0:%d\n", ft_iterative_power(1, -1));
	printf("1:%d\n", ft_iterative_power(10, 0));
	printf("10:%d\n", ft_iterative_power(10, 1));
	printf("100:%d\n", ft_iterative_power(10, 2));
	printf("216:%d\n", ft_iterative_power(10, 3));
}

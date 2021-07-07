/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 10:38:45 by nbenhado          #+#    #+#             */
/*   Updated: 2021/07/07 12:14:21 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
		if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	return nb * ft_recursive_power(nb, power - 1);
}


#include <stdio.h>

int	main(void)
{
	printf("0:%d\n", ft_recursive_power(1, -10));
	printf("0:%d\n", ft_recursive_power(1, -1));
	printf("1:%d\n", ft_recursive_power(10, 0));
	printf("10:%d\n", ft_recursive_power(10, 1));
	printf("100:%d\n", ft_recursive_power(10, 2));
	printf("216:%d\n", ft_recursive_power(6, 3));
}

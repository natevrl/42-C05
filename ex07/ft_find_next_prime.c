/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 14:09:51 by nbenhado          #+#    #+#             */
/*   Updated: 2021/07/07 14:59:49 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int	nb)
{
	int	i;
	int	interrupt;

	i = 2;
	interrupt = 1;
	if (nb <= 2)
		return (2);
	while (interrupt)
	{
		if (nb % i == 0)
		{
			i = 2;
			nb++;
		}
		else if (i == nb - 1)
			interrupt = 0;
		i++;
	}
	return (nb);
}

#include <stdio.h>

int	main(void)
{
	printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n",
			ft_find_next_prime(-1) == 2 ? "OK" : "Fail",
			ft_find_next_prime(-3) == 2 ? "OK" : "Fail",
			ft_find_next_prime(0) == 2 ? "OK" : "Fail",
			ft_find_next_prime(1) == 2 ? "OK" : "Fail",
			ft_find_next_prime(2) == 2 ? "OK" : "Fail",
			ft_find_next_prime(3) == 3 ? "OK" : "Fail",
			ft_find_next_prime(4) == 5 ? "OK" : "Fail",
			ft_find_next_prime(5) == 5 ? "OK" : "Fail",
			ft_find_next_prime(6) == 7 ? "OK" : "Fail",
			ft_find_next_prime(7) == 7 ? "OK" : "Fail",
			ft_find_next_prime(10) == 11 ? "OK" : "Fail",
			ft_find_next_prime(11) == 11 ? "OK" : "Fail",
			ft_find_next_prime(13) == 13 ? "OK" : "Fail",
			ft_find_next_prime(19) == 19 ? "OK" : "Fail",
			ft_find_next_prime(75) == 79 ? "OK" : "Fail"
		  );
}

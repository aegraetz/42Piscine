/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraetz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 14:14:11 by agraetz           #+#    #+#             */
/*   Updated: 2021/12/13 10:46:29 by agraetz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power != 0)
	{
		i = i * nb;
		power--;
	}
	return (i);
}

/*
#include <stdio.h>
int	main()
{
	int nb = 3;
	int power = 3;

	printf("answer: %d", ft_iterative_power(nb, power));
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive.power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraetz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 16:34:34 by agraetz           #+#    #+#             */
/*   Updated: 2021/12/13 10:47:39 by agraetz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	else if (power != 0)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	return (nb);
}

/*
#include <stdio.h>
int	main()
{
	printf("answer: %d", ft_recursive_power(3, 3));
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraetz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 11:32:55 by agraetz           #+#    #+#             */
/*   Updated: 2021/11/29 14:22:38 by agraetz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_n(int n)
{
	n += 48;
	write(1, &n, 1);
}

void	ft_print_comb2(void)
{	
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print_n(a / 10);
			ft_print_n(a % 10);
			write(1, " ", 1);
			ft_print_n(b / 10);
			ft_print_n(b % 10);
			if (a != 98)
			{
				write(1, ", ", 1);
			}
			b++;
		}
		a++;
	}	
}

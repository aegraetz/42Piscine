/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraetz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 10:19:10 by agraetz           #+#    #+#             */
/*   Updated: 2021/12/13 14:47:09 by agraetz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	h;

	h = ac - 1;
	while (h > 0)
	{
		i = 0;
		while (av[h][i] != '\0')
		{
			ft_putchar(av[h][i]);
			i++;
		}
		write(1, "\n", 1);
		h--;
	}
}

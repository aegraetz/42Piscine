/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraetz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 13:27:06 by agraetz           #+#    #+#             */
/*   Updated: 2021/12/10 13:45:42 by agraetz          ###   ########.fr       */
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

	h = 1;
	while (h < ac)
	{
		i = 0;
		while (av[h][i] != '\0')
		{
			ft_putchar(av[h][i]);
			i++;
		}
		write(1, "\n", 1);
		h++;
	}
}

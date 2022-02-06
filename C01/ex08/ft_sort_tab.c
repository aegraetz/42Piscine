/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraetz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 09:41:44 by agraetz           #+#    #+#             */
/*   Updated: 2021/12/01 14:22:01 by agraetz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int *size)
{
	int	a;
	int	i;
	int	j;

	a = 0;
	i = 0;
	while (a < size)
	{	
		while (i < size)
		{
			if (tab[a] > tab[i])
			{
				j = tab[a];
				tab[a] = tab[i];
				tab[i] = a;
			}
			i++;
		}
		a++;
		i = a + 1;
	}
}

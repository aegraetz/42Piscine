/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraetz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:39:50 by agraetz           #+#    #+#             */
/*   Updated: 2021/12/01 12:57:42 by agraetz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	a;

	a = 0;
	size--;
	while (a <= size)
	{
		i = tab[a];
		tab[a] = tab[size];
		tab[size] = i;
		a++;
		size--;
	}
}

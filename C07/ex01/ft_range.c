/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraetz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:51:00 by agraetz           #+#    #+#             */
/*   Updated: 2021/12/14 13:48:28 by agraetz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*size;
	int	i;

	if (min >= max)
	{
		return (0);
	}
	size = malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
	{
		size[i] = min;
		i++;
		min++;
	}
	return (size);
}

/*
#include <stdio.h>
int	main(void)
{
	int min = 3;
	int max = 9;
	printf("%d\n", *ft_range(min, max));
}
*/

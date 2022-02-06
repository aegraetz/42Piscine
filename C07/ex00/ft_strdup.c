/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraetz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 11:19:55 by agraetz           #+#    #+#             */
/*   Updated: 2021/12/14 13:47:39 by agraetz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*size;
	int		i;

	size = malloc(sizeof(*src));
	if (size == 0)
	{
		return (0);
	}
	i = 0;
	while (src[i] != '\0')
	{
		size[i] = src[i];
		i++;
	}
	size[i] = '\0';
	return (size);
}
/*
#include<stdio.h>
int	main()
{
	printf("%s\n", ft_strdup("test"));
	return (0);
}
*/

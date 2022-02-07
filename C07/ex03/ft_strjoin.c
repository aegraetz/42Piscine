/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraetz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 10:23:03 by agraetz           #+#    #+#             */
/*   Updated: 2021/12/15 11:51:18 by agraetz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	total_len(int size, char **strs, char *sep)
{
	int	a;
	int	total_len;

	a = 0;
	total_len = 0;
	while (a < size)
	{
		total_len = total_len + ft_strlen(strs[a] + 1);
		a++;
	}
	total_len = total_len + (size - 1) + ft_strlen(sep + 1);
	return (total_len);
}

char	*ft_strcat(char *str1, char *str2)
{
	int	i;
	int	j;

	i = 0;
	while (str1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (str2[j] != '\0')
	{
		str1[i] = str2[j];
		i++;
		j++;
	}
	str1[i] = '\0';
	return (str1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;

	if (size == 0)
	{
		str = malloc(sizeof(char));
		*str = 0;
		return (str);
	}
	str = malloc(sizeof(char) * total_len(size, strs, sep));
	i = 0;
	while (i < size)
	{
		ft_strcat (str, strs[i]);
		if (i < size - 1)
		{
			ft_strcat (str, sep);
		}
		i++;
	}
	return (str);
}

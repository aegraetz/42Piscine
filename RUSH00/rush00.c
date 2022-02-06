/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzawko   <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 16:27:49 by tzawko            #+#    #+#             */
/*   Updated: 2021/11/28 16:46:56 by agraetz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char *c);

void	ft_getsidesandmiddle(int width, int length, int x, int y)
{
	if (width == 1 || width == x)
	{
		ft_putchar("|");
	}
	else if (length == 1 || length == y)
	{
		ft_putchar("-");
	}
	else if (width > 1 && width < x && length > 1 && length < y)
	{
		ft_putchar(" ");
	}
}

void	ft_getcorners(int width, int length, int x, int y)
{
	if (width == 1 && length == 1)
	{
		ft_putchar("o");
	}
	else if (width == x && length == 1)
	{
		ft_putchar("o");
	}
	else if (width == 1 && length == y)
	{
		ft_putchar("o");
	}
	else if (width == x && length == y)
	{
		ft_putchar("o");
	}
	else
	{
		ft_getsidesandmiddle(width, length, x, y);
	}
}

void	rush(int x, int y)
{
	int	width;
	int	length;

	length = 1;
	while (length <= y)
	{
		width = 1;
		while (width <= x)
		{
			ft_getcorners(width, length, x, y);
			width++;
		}
		ft_putchar("\n");
		length++;
	}
}

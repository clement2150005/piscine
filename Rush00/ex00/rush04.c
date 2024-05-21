/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aichida <aichida@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 16:27:52 by aichida           #+#    #+#             */
/*   Updated: 2024/03/10 20:55:22 by aichida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

//write upper line
void	write_u(int x)
{
	int		i_x;

	i_x = 1;
	ft_putchar('A');
	while (i_x < x - 1)
	{
		ft_putchar('B');
		i_x++;
	}
	if (x >= 2)
	{
		ft_putchar('C');
	}
	ft_putchar('\n');
}

//write downer line
void	write_d(int x)
{
	int		i_x;

	i_x = 1;
	ft_putchar('C');
	while (i_x < x - 1)
	{
		ft_putchar('B');
		i_x++;
	}
	if (x >= 2)
	{
		ft_putchar('A');
	}
	ft_putchar('\n');
}

//write midde-lines
void	write_mid(int x)
{
	int		i_x;

	i_x = 1;
	ft_putchar('B');
	while (i_x < x - 1)
	{
		ft_putchar(' ');
		i_x++;
	}
	if (x >= 2)
	{
		ft_putchar('B');
	}
	ft_putchar('\n');
}

//write a box
void	rush(int x, int y)
{
	int		i_y;

	i_y = 0;
	if (x <= 0)
	{
		return ;
	}
	while (i_y < y)
	{
		if (i_y == 0)
		{
			write_u(x);
		}
		else if (i_y == y - 1)
		{
			write_d(x);
		}
		else
		{
			write_mid(x);
		}
		i_y++;
	}
}

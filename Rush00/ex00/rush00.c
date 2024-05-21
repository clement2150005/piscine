/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aichida <aichida@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 09:57:00 by aichida           #+#    #+#             */
/*   Updated: 2024/03/09 18:44:42 by aichida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	write_ud(int x)
{
	int	i_x;

	i_x = 1;
	ft_putchar('o');
	while (i_x < x - 1)
	{
		ft_putchar('-');
		i_x++;
	}
	if (x >= 2)
		ft_putchar('o');
	ft_putchar('\n');
}

void	write_mid(int x)
{
	int	i_x;

	i_x = 1;
	ft_putchar('|');
	while (i_x < x - 1)
	{
		ft_putchar(' ');
		i_x++;
	}
	if (x >= 2)
		ft_putchar('|');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i_y;

	i_y = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (i_y < y)
	{
		if (i_y == 0 || i_y == y - 1)
			write_ud(x);
		else
			write_mid(x);
		i_y++;
	}
}

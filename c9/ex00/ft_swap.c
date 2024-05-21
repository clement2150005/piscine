/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 20:55:18 by ccolin            #+#    #+#             */
/*   Updated: 2024/03/11 22:16:39 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	c;

	c = 0;
	c = *a;
	*a = *b;
	*b = c;
}
//#include <stdio.h>

//int	main(void)
//{
//	int	a;
//	int	b;

//	a = 10;
//	b = 20;
//	printf("int a = %d\nint b = %d\n\nSwapping...\n\n", a, b);
//	ft_swap(&a, &b);
//	printf("int a = %d\nint b = %d", a, b);
//	return (0);
//}
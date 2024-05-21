/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 14:59:18 by ccolin            #+#    #+#             */
/*   Updated: 2024/03/16 15:28:49 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
//#include <stdio.h>
//#include <string.h>

//int	main(void)
//{
//	char	string[] = "Hello, world";
//	int		result;

//	result = ft_strlen(string);
//	printf("\n\nft_strlen = %d\n\n", result);
//	result = strlen(string);
//	printf("strlen = %d\n\n", result);
//}
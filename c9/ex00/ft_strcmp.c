/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:29:54 by ccolin            #+#    #+#             */
/*   Updated: 2024/03/14 10:40:49 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] && s2[i]) && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
//#include <string.h>
//#include <stdio.h>
//int	main(void)
//{
//	char s1[40] = "acdef";
//	char s2[40] = "acdeyf";
//	int result = 2;
//	int result_2 = 2;
//	result_2 = ft_strcmp(s1, s2);
//	result = strcmp(s1, s2);
//	printf("\n\nstrcmp's result = %d\n\n", result);
//	printf("ft_strcmp's result = %d\n\n", result_2);
//	return (0);
//}
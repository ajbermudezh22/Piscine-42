/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albermud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:47:17 by albermud          #+#    #+#             */
/*   Updated: 2023/03/21 15:47:19 by albermud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		if (*str <= '`' || *str >= '{')
		{
			i++;
		}
		str++;
	}
	if (i > 0)
	{
		return (0);
	}
	else
		return (1);
}
/*
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	char	str[] = "aloha";

	if(ft_str_is_lowercase(str) == 1)
		printf("The string contains only lowercase alphabetical characters");
	else
		printf("At least one character is not lowercase alphabetical");
	return (0);
}
*/

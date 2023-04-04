/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albermud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:14:30 by albermud          #+#    #+#             */
/*   Updated: 2023/03/21 17:14:33 by albermud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		if (*str <= '@' || *str >= '[')
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
	char	str[] = "ALOHA";

	if(ft_str_is_uppercase(str) == 1)
		printf("The string contains only uppercase alphabetical characters");
	else
		printf("At least one character is not uppercase alphabetical");
	return (0);
}
*/

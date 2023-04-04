/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albermud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:09:01 by albermud          #+#    #+#             */
/*   Updated: 2023/03/21 14:09:03 by albermud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		if (*str <= '@' || (*str >= '[' && *str <= '`') || *str >= '{')
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
	char	str[] = "";

	if(ft_str_is_alpha(str) == 1)
		printf("The string contains only alphabetical characters");
	else
		printf("The string contains at least one non alphabetical character");
	return (0);
}
*/

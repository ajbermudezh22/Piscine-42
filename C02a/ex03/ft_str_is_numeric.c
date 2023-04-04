/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albermud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:41:36 by albermud          #+#    #+#             */
/*   Updated: 2023/03/21 15:41:38 by albermud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		if (*str <= '/' || *str >= ':')
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
	char	str[] = "12345";

	if(ft_str_is_numeric(str) == 1)
		printf("The string contains only digits");
	else
		printf("The string contains at least one character that is not a digit");
	return (0);
}
*/

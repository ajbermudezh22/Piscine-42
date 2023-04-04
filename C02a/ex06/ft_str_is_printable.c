/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albermud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:17:13 by albermud          #+#    #+#             */
/*   Updated: 2023/03/21 17:17:15 by albermud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		if (*str < ' ' || *str > '~')
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
	char	str[] = "ALOHA 123";

	if(ft_str_is_printable(str) == 1)
		printf("The string contains only printable characters");
	else
		printf("At least one character is not printable");
	return (0);
}
*/

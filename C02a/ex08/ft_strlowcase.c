/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albermud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:43:56 by albermud          #+#    #+#             */
/*   Updated: 2023/03/21 18:43:58 by albermud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] >= 'A' && str[n] <= 'Z')
		{
			str[n] = str[n] + 32;
		}
		n++;
	}
	return (str);
}
/*
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	char	str[] = {"ALOHA"};
	printf("In lowercase the word is %s: ", ft_strlowcase(str));	
	return (0);
}
*/

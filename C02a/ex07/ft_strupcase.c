/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albermud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:54:41 by albermud          #+#    #+#             */
/*   Updated: 2023/03/21 17:54:43 by albermud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] >= 'a' && str[n] <= 'z')
		{
			str[n] = str[n] - 32;
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
	char	str[] = {"aloha"};
	printf("In uppercase the word is %s: ", ft_strupcase(str));	
	return (0);
}
*/

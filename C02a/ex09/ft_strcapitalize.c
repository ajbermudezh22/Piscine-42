/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albermud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 10:44:11 by albermud          #+#    #+#             */
/*   Updated: 2023/03/22 10:44:13 by albermud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alphanumeric(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'));
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	word_start;

	i = 0;
	word_start = 1;
	while (str[i] != '\0')
	{
		if (!is_alphanumeric(str[i]))
			word_start = 1;
		else if (word_start)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= ('a' - 'A');
			word_start = 0;
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += ('a' - 'A');
		}
		i++;
	}
	return (str);
}
/*
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	char	str[] = {"salut, comMent tu vas ? 42mots quarante-dEux; cinquante+et+un"};
	printf("%s", ft_strcapitalize(str));	
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albermud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 23:38:37 by albermud          #+#    #+#             */
/*   Updated: 2023/03/23 23:52:16 by albermud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_rev_print (char *str)
{
	int		i;
		
	i = ft_strlen(str);
	i--;
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	return (str);
}

#include <stdio.h>
int	main(void)
{
	char	str[] = {"hola"};
	ft_rev_print(str);
}

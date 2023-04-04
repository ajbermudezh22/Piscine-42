/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albermud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 23:31:38 by albermud          #+#    #+#             */
/*   Updated: 2023/03/23 23:35:10 by albermud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
/*
#include <stdio.h>
int	main(void)
{
	char str[] = {"holjhsdajhkadsjhksdaa"};
	printf("%d", ft_strlen(str));
}
*/

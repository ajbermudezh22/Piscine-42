/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albermud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 19:53:53 by albermud          #+#    #+#             */
/*   Updated: 2023/03/21 19:53:55 by albermud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	if (size == 0)
		return (len);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

/*
#include <stdio.h>
#include <string.h>

int		main(void)
{
	char src[] = {"hola, hola, hola, hola, hola, hola como estas"};
	char dest[] = {"Germany"};
	printf("Original string: %s\n", src);
	printf("%u\n", ft_strlcpy(dest, src, 80));
	printf("Final copied string: %s\n ", dest);
	return (0);
}
*/
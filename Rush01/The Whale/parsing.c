/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albermud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 10:48:11 by albermud          #+#    #+#             */
/*   Updated: 2023/03/26 10:48:12 by albermud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include <stdlib.h>

int check(int ac, char **av)
{
	if (ac != 2)
		return (1);
	if (ft_strlen(av[1]) != 31)
		return (1);
	return (0);
}

int *get_numbers(char *str)
{
	int i;
	int j;
	int *tab;

	if (!(tab = malloc(sizeof(int) * 16)))
		return (0);
	i = -1;
	j = 0;
	while (str[++i] != '\0')
		if (str[i] >= '0' && str[i] <= '9')
			tab[j++] = ft_atoi(str + i);
	return (tab);
}
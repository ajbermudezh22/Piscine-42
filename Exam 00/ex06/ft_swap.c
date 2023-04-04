/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albermud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 22:41:01 by albermud          #+#    #+#             */
/*   Updated: 2023/03/23 22:48:27 by albermud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}
/*
#include <stdio.h>

int	main(void)
{
	int a;
	int b;

	a = 5;
	b = 6;
	ft_swap(&a, &b);

	printf("%d, %d ", a, b);
}
*/

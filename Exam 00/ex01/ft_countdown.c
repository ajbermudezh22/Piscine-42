/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albermud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 22:02:47 by albermud          #+#    #+#             */
/*   Updated: 2023/03/23 22:10:05 by albermud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_countdown(void)
{
	char	i;

	i = '9';
	while (i <= '9' && i >= '0')
	{
		ft_putchar(i);
		ft_putchar('\n');
		i--;
	}
}

int	main(void)
{
	ft_countdown();
}

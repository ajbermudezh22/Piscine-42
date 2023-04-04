/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albermud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 10:44:39 by albermud          #+#    #+#             */
/*   Updated: 2023/03/26 10:44:58 by albermud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FUNCTIONS_H__
#define __FUNCTIONS_H__

void ft_putnbr(int nb);
void ft_putchar(char c);
void ft_putstr(char *str);

int ft_atoi(char *str);
int ft_strlen(char *str);
int *get_numbers(char *str);
int check(int ac, char **av);
int check_double(int tab[4][4], int pos, int num);
int check_case(int tab[4][4], int pos, int entry[16]);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albermud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 17:38:50 by albermud          #+#    #+#             */
/*   Updated: 2023/03/24 17:38:51 by albermud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	int i = 1;
    char buf[4];
    while (i <= 100) {
        int len = 0;
        if (i % 3 == 0 && i % 5 == 0) {
            write(1, "FizzBuzz\n", 9);
        } else if (i % 3 == 0) {
            write(1, "Fizz\n", 5);
        } else if (i % 5 == 0) {
            write(1, "Buzz\n", 5);
        } else {
            int n = i;
            while (n != 0) {
                buf[len++] = '0' + n % 10;
                n /= 10;
            }
            for (int j = 0; j < len / 2; j++) {
                char temp = buf[j];
                buf[j] = buf[len - j - 1];
                buf[len - j - 1] = temp;
            }
            buf[len++] = '\n';
            write(1, buf, len);
        }
        i++;
    }
    return 0;
}

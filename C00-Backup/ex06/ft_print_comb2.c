/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozbakir <yozbakir@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:37:49 by yozbakir          #+#    #+#             */
/*   Updated: 2023/07/13 19:51:40 by yozbakir          ###   ########.tr      */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	birinci;
	int	ikinci;

	birinci = 0;
	ikinci = 0;
	while (birinci <= 98)
	{
		ikinci = birinci + 1;
		while (ikinci <= 99)
		{
			ft_putchar(birinci / 10 + 48);
			ft_putchar(birinci % 10 + 48);
			write(1, " ", 1);
			ft_putchar(ikinci / 10 + 48);
			ft_putchar(ikinci % 10 + 48);
			if (birinci != 98 || ikinci != 99)
			{
				write(1, ", ", 2);
			}
			ikinci++;
		}
		birinci++;
	}
}

/*int main(void)
{
	ft_print_comb2();
}*/

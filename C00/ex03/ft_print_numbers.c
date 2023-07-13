/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozbakir <yozbakir@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 20:04:32 by yozbakir          #+#    #+#             */
/*   Updated: 2023/07/13 19:37:31 by yozbakir          ###   ########.tr      */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	rakam;

	rakam = '0';
	while (rakam <= '9')
	{
		write(1, &rakam, 1);
		rakam++;
	}
}

/*int main(void)
{
	ft_print_numbers();
}*/

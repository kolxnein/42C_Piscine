/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozbakir <yozbakir@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 20:04:48 by yozbakir          #+#    #+#             */
/*   Updated: 2023/07/13 19:48:20 by yozbakir          ###   ########.tr      */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
		write(1, &"P", 1);
	else 
		write(1, &"N", 1);
}

/*int	main(void)
{
	ft_is_negative(0);
}*/

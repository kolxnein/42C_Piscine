/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozbakir <yozbakir@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 17:42:55 by yozbakir          #+#    #+#             */
/*   Updated: 2023/07/19 19:25:04 by yozbakir          ###   ########.tr      */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	f;
	int	holder;

	i = 0;
	f = size - 1;
	while (i < f)
	{
		holder = tab[i];
		tab[i] = tab[f];
		tab[f] = holder;
		i++;
		f--;
	}
}

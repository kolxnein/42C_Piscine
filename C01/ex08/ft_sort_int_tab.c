/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozbakir <yozbakir@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 18:13:05 by yozbakir          #+#    #+#             */
/*   Updated: 2023/07/19 19:38:34 by yozbakir          ###   ########.tr      */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	f;
	int	holder;

	i = 0;
	f = i + 1;
	while (i <= size - 2)
	{
		if (tab[i] > tab[f])
		{
			holder = tab[i];
			tab[i] = tab[f];
			tab[f] = holder;
		}
		if (f == size - 1)
		{
			i++;
			f = i + 1;
		}
		else if (f != size - 1)
		{
			f++;
		}
	}
}

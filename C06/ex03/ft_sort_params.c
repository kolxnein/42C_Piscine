/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozbakir <yozbakir@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 13:38:53 by yozbakir          #+#    #+#             */
/*   Updated: 2023/07/30 14:38:12 by yozbakir          ###   ########.tr      */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] & s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort(int argc, char **argv)
{
	char	*holder;
	int		i;
	int		f;

	i = 1;
	f = i + 1;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[f]) > 0)
		{
			holder = argv[i];
			argv[i] = argv[f];
			argv[f] = holder;
		}
		if (f == argc - 1)
		{
			i++;
			f = i + 1;
		}
		else if (f != argc - 1)
		{
			f++;
		}
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	ft_sort(argc, argv);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}

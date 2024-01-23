/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 10:07:43 by bel-kdio          #+#    #+#             */
/*   Updated: 2022/05/29 17:12:00 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
	i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		if (s1[i] < s2[i] || s1[i] > s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main(int ac, char **av)
{
	int	j;
	int	x;

	x = 1;
	while (x < ac - 1)
	{
		j = 1;
		while (j < ac - 1)
		{
			if (ft_strcmp(av[j], av[j + 1]) > 0)
			{
				ft_swap(&av[j], &av[j + 1]);
			}
			j++;
		}
		x++;
	}
	j = 1;
	while (j < ac)
	{
		ft_putstr(av[j]);
		write(1, "\n", 1);
		j++;
	}
	return (0);
}

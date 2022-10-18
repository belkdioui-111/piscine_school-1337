/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 19:45:59 by bel-kdio          #+#    #+#             */
/*   Updated: 2022/05/15 10:09:27 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_printnum(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_printnum('0' + a / 10);
			ft_printnum('0' + a % 10);
			ft_printnum(' ');
			ft_printnum('0' + b / 10);
			ft_printnum('0' + b % 10);
			if (a != 98)
			{
				ft_printnum(',');
				ft_printnum(' ');
			}
			b++;
		}
		a++;
	}
}

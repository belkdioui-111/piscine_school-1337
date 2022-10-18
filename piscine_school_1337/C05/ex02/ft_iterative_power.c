/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 10:41:33 by bel-kdio          #+#    #+#             */
/*   Updated: 2022/05/29 11:23:26 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{	
	int	x;

	x = nb;
	if (power >= 0)
	{
		if (power == 0)
		{
			return (1);
		}
		else if (power > 1)
		{
			while (power > 1)
			{
				nb *= x;
				power--;
			}
			return (nb);
		}
		else if (power == 1)
		{
			return (nb);
		}
	}
	return (0);
}

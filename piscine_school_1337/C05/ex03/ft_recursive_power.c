/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 12:46:35 by bel-kdio          #+#    #+#             */
/*   Updated: 2022/05/28 14:58:43 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_power(int nb, int power)
{
	if (power >= 0)
	{
		if (power == 0)
		{
			return (1);
		}
		else if (power > 1)
		{
			return (nb * ft_recursive_power(nb, power - 1));
		}
		else if (power == 1)
		{
			return (nb);
		}
	}
	return (0);
}

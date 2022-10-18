/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 08:59:06 by bel-kdio          #+#    #+#             */
/*   Updated: 2022/05/28 09:31:27 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	a;

	a = nb;
	if (nb >= 0)
	{
		if (a == 0 || a == 1)
		{
			nb = 1;
			return (nb);
		}
		else if (a > 1)
		{
			while (a > 1)
			{
				nb *= --a;
			}
			return (nb);
		}
	}
	return (0);
}

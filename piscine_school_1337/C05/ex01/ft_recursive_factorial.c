/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 09:33:22 by bel-kdio          #+#    #+#             */
/*   Updated: 2022/05/28 09:51:12 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_factorial(int nb)
{
	if (nb >= 0)
	{
		if (nb == 0 || nb == 1)
		{
			nb = 1;
			return (nb);
		}
		else if (nb > 1)
		{
			return (nb * ft_recursive_factorial(nb - 1));
		}
	}
	return (0);
}

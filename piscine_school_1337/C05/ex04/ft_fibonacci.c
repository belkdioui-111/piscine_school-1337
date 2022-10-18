/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 15:01:22 by bel-kdio          #+#    #+#             */
/*   Updated: 2022/05/29 13:14:40 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_fibonacci(int index)
{
	if (index >= 0)
	{
		if (index == 0)
		{
			return (0);
		}
		else if (index == 1)
		{
			return (1);
		}
		else
		{
			return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
		}
	}
	return (-1);
}

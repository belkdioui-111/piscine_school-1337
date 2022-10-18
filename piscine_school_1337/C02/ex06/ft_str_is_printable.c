/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:03:10 by bel-kdio          #+#    #+#             */
/*   Updated: 2022/05/21 16:22:14 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	x;

	i = 0;
	x = 1;
	while (str[i] != '\0' && x == 1)
	{
		if (str[i] >= 32 && str[i] <= 127)
			x = 1;
		else
			x = 0;
	i++;
	}
	return (x);
}

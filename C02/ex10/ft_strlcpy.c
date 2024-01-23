/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 18:24:09 by bel-kdio          #+#    #+#             */
/*   Updated: 2022/05/22 18:48:55 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;

	i = 0;
	x = len(src);
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
		i++;
		}
	dest[i] = '\0';
	}
	return (x);
}

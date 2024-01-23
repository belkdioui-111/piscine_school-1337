/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 11:56:13 by bel-kdio          #+#    #+#             */
/*   Updated: 2022/05/13 12:15:36 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alph;

		alph = 'z' ;
	while (alph >= 'a')
	{
		write(1, &alph, 1);
		alph--;
	}
}

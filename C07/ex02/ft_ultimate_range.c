/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 13:22:00 by bel-kdio          #+#    #+#             */
/*   Updated: 2022/05/31 10:06:39 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	else
		len = max - min;
	*range = malloc(len * sizeof(int));
	if (range == 0)
	{
		*range = 0;
		return (-1);
	}
	while (i < len)
	{
		(*range)[i] = i + min;
		i++;
	}
	return (len);
}
/*
#include<stdio.h>
int main()
{
  int min=5 ;
  int max=10;
  int **range = malloc(sizeof(int*));
    printf("%d",ft_ultimate_range(range,min,max));
    return (0);
  }*/

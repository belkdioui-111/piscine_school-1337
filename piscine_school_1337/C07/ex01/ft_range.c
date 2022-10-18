/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 10:21:08 by bel-kdio          #+#    #+#             */
/*   Updated: 2022/05/31 09:54:17 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*p;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	else
		range = max - min;
	p = malloc (range * sizeof(int));
	if (p == NULL)
		return (NULL);
	while (i < range)
	{
		p[i] = i + min;
		i++;
	}
	return (p);
}
/*
#include<stdio.h>
int main()
{
  int min=10 ;
  int max=7;
  int *a=ft_range(min,max);;
  int i=0;
  if(i<max-min)
  {
  while(i<max-min)
  {
    printf("%d",a[i]);
    i++;
  }
  }
}*/

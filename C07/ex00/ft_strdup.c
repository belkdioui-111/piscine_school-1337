/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 17:48:37 by bel-kdio          #+#    #+#             */
/*   Updated: 2022/05/31 09:39:46 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *src)
{	
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dst;

	dst = malloc (ft_strlen (src) + 1);
	if (dst == NULL)
		return (NULL);
	ft_strcpy (dst, src);
	return (dst);
}
/*#include<stdio.h>
int main()
{
	char *str="badre";
	printf("%s",ft_strdup(str));
}*/

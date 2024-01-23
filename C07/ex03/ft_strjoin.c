/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:33:19 by bel-kdio          #+#    #+#             */
/*   Updated: 2022/05/31 15:14:41 by bel-kdio         ###   ########.fr       */
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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	lenthsum(char **strs, int size, char *sep)
{
	int	result;
	int	i;

	i = 0;
	result = 0;
	while (size && strs[i])
	{
		result += ft_strlen(strs[i]);
		result += ft_strlen(sep);
		i++;
		size--;
	}
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	char	*s;
	char	*d;

	i = 0;
	j = size;
	if (size <= 0)
	{
		return (0);
	}
	s = malloc (lenthsum (strs, size, sep));
	d = s;
	while (i < size)
	{
		ft_strcpy(d, strs[i]);
		d += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(d, sep);
			d += ft_strlen(sep);
		}
		i++;
	}
	return (s);
}
/*int    main(void)
{
    char    **strs;
    char    *separator;
    int    size;

    size = 3;
    strs = (char **)malloc(3 * sizeof(char *));
    strs[0] = (char *)malloc(sizeof(char) * 3 + 1);
    strs[1] = (char *)malloc(sizeof(char) * 5 + 1);
    strs[2] = (char *)malloc(sizeof(char) * 1 + 1);
    strs[0] = "Hey";
    strs[1] = "badre";
    strs[2] = "how are you";
    separator = " ";
    printf("%s$\n",ft_strjoin(size, strs, separator) );
    free(result);
}*/

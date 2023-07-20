/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-gars <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 10:21:55 by mle-gars          #+#    #+#             */
/*   Updated: 2023/07/19 15:39:58 by mle-gars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
/*#include<stdio.h>*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int	ft_tot_length(int size, char **strs)
{
	int	tot_length;
	int	k;

	tot_length = 0;
	k = 0;
	while (k < size)
	{
		tot_length += ft_strlen(strs[k]);
		k++;
	}
	return (tot_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		tot_len;
	int		l;

	if (size == 0)
	{
		result = malloc(sizeof(char));
		*result = 0;
		return (result);
	}
	tot_len = ft_tot_length(size, strs) + 1 + (size - 1) * ft_strlen(sep);
	result = malloc(tot_len * sizeof(char));
	if (result == 0)
		return (0);
	result[0] = '\0';
	l = 0;
	while (l < size)
	{
		ft_strcat(result, strs[l]);
		l++;
		if (l < size)
			ft_strcat(result, sep);
	}
	result[tot_len - 1] = '\0';
	return (result);
}

/*int	main(int argc, char **argv)
{
	printf("./ex03/output___said___this___is___a___success :\n");
	printf("%s\n", ft_strjoin(argc, argv, "___"));
}*/

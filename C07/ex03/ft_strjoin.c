/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-gars <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 10:21:55 by mle-gars          #+#    #+#             */
/*   Updated: 2023/07/18 16:37:12 by mle-gars         ###   ########.fr       */
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
	int	i;
	int	j;

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

int	ft_tot_length(int size, char **strs, char *sep)
{
	int	tot_length;
	int	sep_length;
	int	k;

	sep_length = ft_strlen(sep);
	tot_length = 0;
	k = 0;
	while (k < size)
	{
		tot_length += ft_strlen(strs[k]);
		k++;
	}
	tot_length += (size - 1) * sep_length;
	return (tot_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	char	*empty_str;
	int		l;

	result = malloc((ft_tot_length(size, strs, sep) + 1) * sizeof(char));
	if (size == 0)
	{
		empty_str = malloc(sizeof(char));
		empty_str[0] = '\0';
		return (empty_str);
	}
	if (result == NULL)
		return (NULL);
	l = 0;
	while (l < size)
	{
		ft_strcat(result, strs[l]);
		if (l != size - 1)
			ft_strcat(result, sep);
		l++;
	}
	result[ft_tot_length(size, strs, sep) + 1] = '\0';
	return (result);
}

/*int	main(int argc, char **argv)
{
	printf("./ex03/output___said___this___is___a___success :\n");
	printf("%s\n", ft_strjoin(argc, argv, "___"));
}*/

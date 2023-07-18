/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-gars <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:42:03 by mle-gars          #+#    #+#             */
/*   Updated: 2023/07/18 21:25:55 by mle-gars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	ft_issep(char c, char *charset)
{
	int	l;

	l = 0;
	while (charset[l] != 0)
	{
		if (c == charset[l])
			return (1);
		++l;
	}
	return (0);
}

int	ft_count_wd(char *str, char *charset)
{
	int	count;
	int	in_wd;

	count = 0;
	in_wd = 0;
	while (*str != '\0')
	{
		if (!ft_issep(*str, charset))
		{
			if (!in_wd)
			{
				in_wd = 1;
				count++;
			}
		}
		else
			in_wd = 0;
		str++;
	}
	return (count);
}

char	*ft_strdup(char *src, int length)
{
	char	*dplc;
	int		i;

	dplc = malloc((length + 1) * sizeof(char));
	if (!dplc)
		return (NULL);
	i = 0;
	while (i < length)
	{
		dplc[i] = src[i];
		++i;
	}
	dplc[length] = '\0';
	return (dplc);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		wd_index;
	int		wd_length;
	int		in_word;

	result = malloc((ft_count_wd(str, charset) + 1) * sizeof(char *));
	wd_index = 0;
	wd_length = 0;
	in_word = 0;
	while (*str != '\0')
	{
		if (!ft_issep(*str, charset))
		{
			if (!in_word)
			{
				in_word = 1;
				wd_length = 0;
			}
			wd_length++;
		}
		else
		{
			if (in_word)
			{
				result[wd_index] = ft_strdup(str - wd_length, wd_length);
				wd_index++;
				in_word = 0;
			}
		}
		str++;
	}
	result[wd_index] = 0;
	return (result);
}

int main(void)
{
	char **result = ft_split("agaga+++agougou+++zbrrrre+++ddd+++", "+++");
	int i = 0;
	while (result[i] != NULL)
	{
		printf("%s\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}

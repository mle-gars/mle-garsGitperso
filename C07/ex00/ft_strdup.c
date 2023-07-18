/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-gars <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 17:53:51 by mle-gars          #+#    #+#             */
/*   Updated: 2023/07/18 08:46:49 by mle-gars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>*/

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

char	*ft_strdup(char *src)
{
	char	*dplc;
	int		i;

	dplc = (char *)malloc(ft_strlen(src) * sizeof(char));
	if (!dplc)
		return (NULL);
	i = 0;
	while (i <= ft_strlen(src))
	{
		dplc[i] = src[i];
		++i;
	}
	return (dplc);
}

/*int	main(void)
{
	printf("%s\n", strcmp(strdup("Test"), ft_strdup("Test")) == 0 ?
			"OK" :
			"Fail");
}*/

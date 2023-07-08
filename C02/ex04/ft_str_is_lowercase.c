/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-gars <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 16:52:26 by mle-gars          #+#    #+#             */
/*   Updated: 2023/07/05 17:03:54 by mle-gars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*#include<stdio.h>*/

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
			i++;
		else
		{
			return (0);
		}
	}
	return (1);
}

/*int	main()
{
	printf("%s\n%s\n%s\n%s\n%s\n%s\n",
			ft_str_is_lowercase("")?"OK":"Fail",
			ft_str_is_lowercase("abcdefghijklmnopqrstuvwxyz")?"OK":"Fail",
			!ft_str_is_lowercase("1")?"OK":"Fail",
			!ft_str_is_lowercase("A")?"OK":"Fail",
			!ft_str_is_lowercase("\\")?"OK":"Fail",
			!ft_str_is_lowercase("\n")?"OK":"Fail");
}*/

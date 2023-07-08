/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-gars <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 16:36:11 by mle-gars          #+#    #+#             */
/*   Updated: 2023/07/05 16:51:04 by mle-gars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*#include<stdio.h>*/

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 48 && str[i] <= 57)
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
			ft_str_is_numeric("")?"OK":"Fail",
			ft_str_is_numeric("0987654321")?"OK":"Fail",
			!ft_str_is_numeric("A")?"OK":"Fail",
			!ft_str_is_numeric(" ")?"OK":"Fail",
			!ft_str_is_numeric("\\")?"OK":"Fail",
			!ft_str_is_numeric("\n")?"OK":"Fail");
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-gars <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 17:20:54 by mle-gars          #+#    #+#             */
/*   Updated: 2023/07/05 17:55:09 by mle-gars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*#include<stdio.h>*/

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
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
			ft_str_is_printable(" ")?"OK":"Fail",
			ft_str_is_printable("ab!@#$%^&*cdefghijkl
1234567890mnopqrstuvwxyz")?"OK":"Fail",
			!ft_str_is_printable("\r")?"OK":"Fail",
			!ft_str_is_printable("\a")?"OK":"Fail",
			!ft_str_is_printable("")?"OK":"Fail",
			!ft_str_is_printable("\n")?"OK":"Fail");
}*/

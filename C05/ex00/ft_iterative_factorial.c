/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-gars <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 13:44:22 by mle-gars          #+#    #+#             */
/*   Updated: 2023/07/12 10:28:19 by mle-gars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>*/

int	ft_iterative_factorial(int nb)
{
	int	itefacto;
	int	i;

	itefacto = 1;
	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i <= nb)
	{	
		itefacto = itefacto * i;
	i++;
	}	
	return (itefacto);
}

/*int	main(void)
{
	printf("0:%d\n", ft_iterative_factorial(-10));
	printf("0:%d\n", ft_iterative_factorial(-1));
	printf("1:%d\n", ft_iterative_factorial(0));
	printf("1:%d\n", ft_iterative_factorial(1));
	printf("3628800:%d\n", ft_iterative_factorial(10));
	printf("6:%d\n", ft_iterative_factorial(3));
}*/

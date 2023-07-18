/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-gars <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 10:45:26 by mle-gars          #+#    #+#             */
/*   Updated: 2023/07/13 21:14:36 by mle-gars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	ispri;

	ispri = 2;
	if (nb == 2)
		return (1);
	if (nb == 0 || nb == 1 || nb < 0 || nb % 2 == 0)
		return (0);
	while ((ispri * ispri <= nb) && (ispri * ispri > 0))
	{
		if (nb % ispri == 0)
			return (0);
		ispri++;
	}
	return (1);
}
#include <stdio.h>

int	main(int ac, char **av)
{
	printf("%d\n",ft_is_prime(atoi(av[1])));
}

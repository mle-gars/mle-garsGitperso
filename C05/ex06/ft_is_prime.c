/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-gars <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 10:45:26 by mle-gars          #+#    #+#             */
/*   Updated: 2023/07/20 13:40:34 by mle-gars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long int	ispri;

	ispri = 2;
	if (nb == 2)
		return (1);
	if (nb == 0 || nb == 1 || nb < 0 || nb % 2 == 0)
		return (0);
	while (ispri <= nb / ispri)
	{
		if (nb % ispri == 0)
			return (0);
		ispri++;
	}
	return (1);
}
/*#include <stdio.h>

int	main(void)
{
	printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n",
		ft_is_prime(-1) == 0 ? "OK" : "Fail",
		ft_is_prime(-3) == 0 ? "OK" : "Fail",
		ft_is_prime(0) == 0 ? "OK" : "Fail",
		ft_is_prime(1) == 0 ? "OK" : "Fail",
		ft_is_prime(2) == 1 ? "OK" : "Fail",
		ft_is_prime(3) == 1 ? "OK" : "Fail",
		ft_is_prime(4) == 0 ? "OK" : "Fail",
		ft_is_prime(5) == 1 ? "OK" : "Fail",
		ft_is_prime(6) == 0 ? "OK" : "Fail",
		ft_is_prime(7) == 1 ? "OK" : "Fail",
		ft_is_prime(10) == 0 ? "OK" : "Fail",
		ft_is_prime(11) == 1 ? "OK" : "Fail",
		ft_is_prime(13) == 1 ? "OK" : "Fail",
		ft_is_prime(19) == 1 ? "OK" : "Fail",
		ft_is_prime(20) == 0 ? "OK" : "Fail"
		  );
}*/

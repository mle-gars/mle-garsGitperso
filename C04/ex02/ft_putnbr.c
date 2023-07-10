/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-gars <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 17:27:45 by mle-gars          #+#    #+#             */
/*   Updated: 2023/07/10 20:30:25 by mle-gars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putnbr(int nb)
{
	char	chiffre;

	if (nb != -2147483648)
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = -nb;
		}
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
		}
		chiffre = 48 + (nb % 10);
		write(1, &chiffre, 1);
	}
	else
		write(1, "-2147483648", 11);
}

/*int	main()
{
	int	n;
	int	n1;

	n = -2147483648;
	n1 = -8;
	ft_putnbr(n);
	write(1, "\n", 1);
	ft_putnbr(n1);
	return (0);
}*/

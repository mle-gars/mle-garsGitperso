/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-gars <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 10:29:04 by mle-gars          #+#    #+#             */
/*   Updated: 2023/07/03 09:22:04 by mle-gars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*int	main(void)
{
	int	a;

	a = 3;
	ft_ft(&a);
	if (a == 42)
	{
		write(1, "OK\n", 3);
	}
	else
	{
		write(1, "FAIL\n", 5);
	}
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-gars <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 11:47:40 by mle-gars          #+#    #+#             */
/*   Updated: 2023/07/03 09:41:27 by mle-gars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*int	main(void)
{
	int	num1;
	int	num2;
	char	space;
	
	num1 = '1';
	num2 = '2';
	space = '\n';
	write(1, &num1, 1); 
        write(1, &num2, 1);
	write(1, &space, 1);
	ft_swap(&num1, &num2);
	write(1, &num1, 1);
	write(1, &num2, 1);
	write(1, &space, 1);
}

int		main(void)
{
	int a = 3;
	int b = 18;

	a = 3;
	b = 18;
	ft_swap(&a, &b);
	if (b == 3 && a == 18)
	{
		write(1, "OK\n", 3);
	}
	else
	{
		write(1, "FAIL\n", 5);
	}
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-gars <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 13:57:31 by mle-gars          #+#    #+#             */
/*   Updated: 2023/07/02 18:38:35 by mle-gars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*#include<stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*int main()
{
	int num1 = 20;
	int num2 = 3;

	printf("Before division: num1 = %d, num2 = %d\n", num1, num2);
    
	ft_ultimate_div_mod(&num1, &num2);

	printf("After division: num1 = %d, num2 = %d\n", num1, num2);
    
    return 0;
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-gars <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:57:16 by mle-gars          #+#    #+#             */
/*   Updated: 2023/07/04 20:18:54 by mle-gars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*#include<stdio.h>*/

void	ft_swp(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	sorted;

	i = 0;
	sorted = 1;
	while (i < size -1)
	{
		if (tab[i] > tab[i + 1])
		{
			ft_swp(&tab[i], &tab[i + 1]);
			sorted = 0;
		}
		i++;
		if (sorted == 0)
		{
			i = 0;
		}
		sorted = 1;
	}
}

/*int		main(void)
{
	int c[5] = {55,-10,59,0,54};
	ft_sort_int_tab(c, 5);
	printf("Ordre croissant:? ");
	printf("%d, %d, %d, %d, %d", c[0], c[1], c[2], c[3], c[4]);}*/

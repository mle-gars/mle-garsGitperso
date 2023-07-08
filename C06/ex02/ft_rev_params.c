/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-gars <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 14:26:03 by mle-gars          #+#    #+#             */
/*   Updated: 2023/07/07 14:44:25 by mle-gars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	int	compteur;

	compteur = 0;
	while (str[compteur] != '\0')
	{
		write(1, &str[compteur], 1);
		++compteur;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = argc - 1;
	while(i < argc && i > 0)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
		i--;
	}
	return (0);
}

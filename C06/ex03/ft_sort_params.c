/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-gars <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 10:45:37 by mle-gars          #+#    #+#             */
/*   Updated: 2023/07/13 13:52:23 by mle-gars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_swp(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

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

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		++i;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	sorted;

	i = 1;
	sorted = 1;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			ft_swp(&argv[i], &argv[i + 1]);
			sorted = 0;
		}
		i++;
		if (sorted == 0)
			i = 1;
		sorted = 1;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
	i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-gars <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:23:09 by mle-gars          #+#    #+#             */
/*   Updated: 2023/07/10 19:28:08 by mle-gars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*#include<stdio.h>*/

int	ft_strlen(char *str)
{
	int	lgr;

	lgr = 0;
	while (str[lgr] != '\0')
	{
		++lgr;
	}
	return (lgr);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == '\0'
			|| base[i] == 32 || (base[i] >= 9 && base[i] <= 13))
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[j] == base [i])
				return (0);
			++j;
		}
		++i;
	}
	if (i < 2)
		return (0);
	return (1);
}

int	ft_fd_index(char index, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == index)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	resultat;
	int	posneg;
	int	i;

	resultat = 0;
	posneg = 1;
	i = 0;
	if (!ft_check_base(base))
		return (0);
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			posneg = posneg * -1;
		i++;
	}
	while (!(str[i] == 32 || (str[i] >= 9 && str[i] <= 13)) && str[i])
	{
		resultat = resultat * ft_strlen(base) + ft_fd_index(str[i], base);
		if (ft_fd_index(str[i], base) == -1)
			return (0);
		i++;
	}
	return (resultat * posneg);
}

/*int	main(void)
{
	printf("42:%d\n", ft_atoi_base("2a", "0123456789abcdef"));
	printf("-42:%d\n", ft_atoi_base("   --------+-2a", "0123456789abcdef"));
	printf("42:%d\n", ft_atoi_base("   -+-2a", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+- 2a", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+-z", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", ""));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "0"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "+-0"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "\t01"));
}*/

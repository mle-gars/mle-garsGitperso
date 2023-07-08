/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-gars <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 09:28:44 by mle-gars          #+#    #+#             */
/*   Updated: 2023/07/06 14:13:02 by mle-gars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*#include<stdio.h>*/

int	ft_noalphanum(int n)
{
	if ((n <= 47 || (n >= 58 && n <= 64) || (n >= 91 && n <= 96) || n >= 123))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	verif;

	i = 0;
	verif = 1;
	while (str[i])
	{
		if (verif == 0 && (str[i] >= 65 && str[i] <= 90))
			str[i] += 32;
		else if ((verif == 1 && (str[i] >= 97 && str[i] <= 122)))
			str[i] -= 32;
		if (ft_noalphanum(str[i]) == 1)
			verif = 1;
		else
			verif = 0;
		i++;
	}
	return (str);
}

/*void	ft_putstr(char *str)
{
	int l;

	l = 0;
	while (str[l])
	{
		l++;
	}
	write(1, str, l);
}

int		main()
{
	char c[] = "salut, coMMent tu vAs ? 42mOts quArAnTe-dEux; cinQuante+et+un";
	ft_putstr("Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un:");
	ft_putstr(ft_strcapitalize(c));
	ft_putstr(":");
	ft_putstr(c);
}*/

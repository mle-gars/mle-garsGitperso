/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-gars <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 20:03:35 by mle-gars          #+#    #+#             */
/*   Updated: 2023/07/02 20:45:43 by mle-gars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*#include<stdio.h>*/

int	ft_strlen(char *str)
{
	int	compteur;

	compteur = 0;
	while (str[compteur] != '\0')
	{
		++compteur;
	}
	return (compteur);
}

/*int	main(void)
{
	char	str[] = "C'est dur le C !";

	printf("%d\n", ft_strlen(str));
}*/

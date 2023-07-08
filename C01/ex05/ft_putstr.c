/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-gars <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 18:42:13 by mle-gars          #+#    #+#             */
/*   Updated: 2023/07/04 17:05:23 by mle-gars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*#include<stdio.h>*/

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

/*int	main(void)
{
	char str[] = "0123456789";
	char str1[] = "C'est dur le C !";

	printf("0123456789:\n");
	ft_putstr(str);
	printf("\n\ntest:\n");
	ft_putstr(str1);	
}*/

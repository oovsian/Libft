/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oovsiann <oovsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 15:02:56 by oovsiann          #+#    #+#             */
/*   Updated: 2024/06/14 20:41:34 by oovsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
//compara solo los primeros (como máximo) n bytes de s1 y s2
//devuelve 0, si s1 y s2 son iguales
//devuelve un valor negativo si s1 es menor que s2
//devuelve un valor positivo si s1 es mayor que s2

/*int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "Te quieroo";
	s2 = "Te quiero,";
	printf("%d", ft_strncmp(s1, s2, 10));
	return (0);
}*/
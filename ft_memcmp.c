/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oovsiann <oovsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 17:57:26 by oovsiann          #+#    #+#             */
/*   Updated: 2024/06/05 19:44:37 by oovsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if ((unsigned char) str1[i] != (unsigned char) str2[i])
			return ((unsigned char) str1[i] - (unsigned char) str2[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "abc";
	s2 = "abs";
	printf("%d", ft_memcmp(s1, s2, 3));
	return (0);
}*/

//compara los primeros n bytes (cada uno interpretado como unsigned char)
// de las áreas de memoria s1 y s2
//devuelve un número entero menor, igual o mayor que cero 
//de la diferencia de los primeros bytes distintos
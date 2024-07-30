/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oovsiann <oovsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:50:49 by oovsiann          #+#    #+#             */
/*   Updated: 2024/06/04 21:44:43 by oovsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	first;
	size_t			i;

	str = (unsigned char *)s;
	first = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == first)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
/*int	main(void)
{
	char const	*str = "Hijo, te quiero!"

	char		*st1;
	char		*st2;
	char		*st3;

	st1 = ft_memchr(str, ',', 17);
	st2 = ft_memchr(str, 'i', 17);
	st3 = ft_memchr(str, 'k', 17);
	printf("\n%s", st1);
	printf("\n%s", st2);
	printf("\n%s", st3);
	return (0);
}*/

//escanea los n bytes iniciales del área de memoria señalada por s
// para la primera instancia de c
//Tanto c como los bytes del área de memoria señalada por s 
//se interpretan como unsigned char
//devuelve un puntero al byte o NULL
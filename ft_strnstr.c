/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oovsiann <oovsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 18:52:13 by oovsiann          #+#    #+#             */
/*   Updated: 2024/05/27 21:00:11 by oovsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == 0)
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && big[i + j] && i + j < len)
			j++;
		if (little[j] == 0)
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	const char	*big;
	const char	*little;
	char		*ptr;

	big = "toda la cadena";
	little = "cadena";
	ptr = ft_strnstr(big, little, 15);
	if (ptr)
		printf("%s\n", ptr);
	else
		printf("Not found\n");
	return (0);
}*/
//localiza la primera aparición de la cadena pequeña terminada en '\0'
// en la cadena grande donde no se buscan más de len caracteres
//Los caracteres que aparecen después de un carácter "\0" no se buscan
//devuelve big, si little es vacia
//devuelve NULL, si no encuentra little
//o devuelve un puntero al primer caracter del little
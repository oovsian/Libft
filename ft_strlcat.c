/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oovsiann <oovsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 20:29:37 by oovsiann          #+#    #+#             */
/*   Updated: 2024/06/14 23:04:25 by oovsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i_dst;
	size_t	i_src;

	i_dst = 0;
	i_src = 0;
	while (dst[i_dst] && i_dst < dstsize)
		i_dst++;
	while (src[i_src] && (i_dst + i_src + 1) < dstsize)
	{
		dst[i_dst + i_src] = src[i_src];
		i_src++;
	}
	if (i_dst < dstsize)
		dst[i_dst + i_src] = '\0';
	return (i_dst + ft_strlen(src));
}

//agrega la cadena src terminada en NUL al final de dst
//agrega como máximo el tamaño: strlen(dst) - 1 bytes,
//terminando en NULL el resultado.
//devuelve la longitud total de cadena que intentó crear

/*int	main(void)
{
	char	dst[13];
	char	src[6];
	size_t	src_len;
	size_t	dst_len;
	size_t	result;

	strcpy(src, "Olena");
	strcpy(dst, "Ovsiannikova");
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	result = ft_strlcat(dst, src, sizeof(dst));
	printf("Concatenated string: %s\n", dst);
	printf("Total length: %zu\n", result);
	return (0);
}*/
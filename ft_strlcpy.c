/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oovsiann <oovsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 12:52:20 by oovsiann          #+#    #+#             */
/*   Updated: 2024/06/14 21:13:38 by oovsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	cont;
	size_t	src_size;

	src_size = 0;
	while (src[src_size] != '\0')
		src_size++;
	cont = 0;
	if (size != 0)
	{
		while (src[cont] != '\0' && cont < (size - 1))
		{
			dst[cont] = src[cont];
			cont++;
		}
		dst[cont] = '\0';
	}
	return (src_size);
}

//copia string (toma el tamaño completo, no solo la longitud)
//copia de src que termina con '\0' a dst hasta size-1
//garantiza la terminacion '\0' del resultado si el tamaño es mayor que 0
//hay que incluir un byte en el tamaño para el '\0'
//revuelve la longitud completa de src

/*int	main(void)
{
	char	*src;
	char	*dst;
	size_t	i;

	src = "La Luz - La Paz";
	i = ft_strlcpy(dst, src, 17);
	printf("%s\n", dst);
	printf("Número de caracteres copiados: %zu\n", i);
}*/
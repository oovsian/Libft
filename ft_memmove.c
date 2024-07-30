/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oovsiann <oovsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 12:10:06 by oovsiann          #+#    #+#             */
/*   Updated: 2024/06/11 20:18:13 by oovsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tmp_dest;
	char	*tmp_src;
	size_t	i;

	if (!dest && !src)
		return (NULL);
	tmp_dest = (char *)dest;
	tmp_src = (char *)src;
	i = 0;
	if (tmp_dest > tmp_src)
	{
		while (n-- > 0)
		{
			tmp_dest[n] = tmp_src[n];
		}
	}
	else
	{
		while (i < n)
		{
			*tmp_dest++ = *tmp_src++;
			i++;
		}
	}
	return (dest);
}

//los bytes de src se copiaran primero en una matriz temporal
//que no se superponga a src o dest
//y luego los bytes se copiaran de la matriz temporal a dest
//Las áreas de memoria pueden superponerse
//devuelve un puntero al destino
//si tmp_dest > tmp_src, copia n bytes de src del fin al principio
//en el contrario - del principio al final

/*int	main(void)
{
	char src[7] = "source";
	char dest[12] = "destination";

	ft_memmove(dest, src, 4);
	printf("%s", dest);
	return (0);
}*/
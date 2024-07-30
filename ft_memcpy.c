/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oovsiann <oovsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:35:06 by oovsiann          #+#    #+#             */
/*   Updated: 2024/06/20 19:48:05 by oovsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*tmp_dest;
	unsigned char	*tmp_src;

	i = 0;
	tmp_dest = (unsigned char *)dest;
	tmp_src = (unsigned char *)src;
	if (src == NULL && dest == NULL)
		return (NULL);
	while (i < n)
	{
		tmp_dest[i] = tmp_src[i];
		i++;
	}
	return (dest);
}

//copia n bytes del área de memoria src al área de memoria dest
//directamente de src a dest en diferencia a memmove()
//devuelve un puntero al dest

/*int	main(void)
{
	char	src[7] = "source";
	char	dest[12] = "destination";
	size_t	i;

	ft_memcpy(dest, src, 7);
	printf("%s", dest);
	return (0);
}*/
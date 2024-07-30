/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oovsiann <oovsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 17:56:40 by oovsiann          #+#    #+#             */
/*   Updated: 2024/06/20 20:18:57 by oovsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
	{
		return (0);
	}
	ft_bzero(ptr, size * count);
	return (ptr);
}

/*int	main(void)
{
	int	*ptr;
	int	i;

	i = 0;
	ptr = NULL;
	ptr = (int *)calloc(10, sizeof(int));

	if (ptr == NULL)
	{
		printf("Error: calloc failed to allocate memory\n");
		return (1);
	}
	while (i < 10)
	{
		printf("%d", ptr[i]);
		i++;
	}
	free(ptr);
	return (0);
}*/

//reserva nmemb cantidad de bloques de memoria del mismo tamaño size
//y establece cada uno de ellos en cero (la memoria se pone a cero)
//devuelve un puntero a la memoria asignada
//Si nmemb o size es 0, entonces calloc() devuelve NULL 
//o un valor de puntero único que luego se puede pasar exitosamente a free()
//free() libera la memoria asignada por calloc()
//Si nmemb * size daría como resultado un desbordamiento de enteros
//entonces calloc() devuelve un error
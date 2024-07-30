/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oovsiann <oovsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 18:51:08 by oovsiann          #+#    #+#             */
/*   Updated: 2024/06/05 19:47:15 by oovsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*ptr;
	size_t	i;

	len = ft_strlen(s);
	ptr = malloc(len + 1);
	i = 0;
	if (ptr == NULL || s == NULL)
		return (NULL);
	while (i < len)
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "Hola mundo!";
	s2 = ft_strdup(s1);

	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	free(s2);
	return (0);
}*/
//duplica la cadena s
//devuelve un puntero a una nueva cadena
//o devuelve NULL si no se pudo asignar memoria para la nueva cadena
//la memoria para la nueva cadena se obtiene con malloc()
//y se puede liberar con free
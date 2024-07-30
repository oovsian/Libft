/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oovsiann <oovsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 19:47:37 by oovsiann          #+#    #+#             */
/*   Updated: 2024/06/05 19:51:05 by oovsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	i;
	size_t			s_len;

	i = 0;
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_calloc(1, 1));
	if (len > s_len - start)
		len = s_len - start;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (substr == NULL || s == NULL)
		return (NULL);
	while (i < len)
	{
		substr[i] = s[start];
		start++;
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

/*int	main(void)
{
	char	*str;
	char	*sub;

	str = "Hola, mundo!";
	sub = ft_substr(str, 7, 5);
	if (sub)
	{
		printf("La subcadena es: %s\n", sub);
		free(sub);
	}
	return (0);
}*/

//Reserva con malloc() y devuelve substring de la string s
//la substring empieza desde el índice 'start' y tiene una longitud 'len'
//devuelve la substring resultante o NULL si falla la reserva de memoria
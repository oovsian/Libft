/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oovsiann <oovsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 20:07:27 by oovsiann          #+#    #+#             */
/*   Updated: 2024/06/15 21:25:15 by oovsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		cont;

	if (!s || !f)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	cont = 0;
	while (s[cont])
	{
		str[cont] = f(cont, s[cont]);
		++cont;
	}
	str[cont] = '\0';
	return (str);
}

/*Aplica la función ’f’ a cada carácter de la cadena
’s’, pasando su índice como primer argumento y el
propio carácter como segundo argumento. Se crea una
nueva cadena (utilizando malloc(3)) para recoger
los resultados de las sucesivas aplicaciones de
’f’.*/
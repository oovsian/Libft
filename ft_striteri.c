/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oovsiann <oovsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 17:39:13 by oovsiann          #+#    #+#             */
/*   Updated: 2024/06/12 21:29:09 by oovsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

// void	lowcase(unsigned int index, char *ch)
// {
// 	*ch = tolower(*ch);
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (s && f)
	{
		i = 0;
		while (*s)
			f(i++, s++);
	}
}

/*int	main(void)
{
	char str[] = "LA LUZ LA PAZ";
	ft_striteri(str, lowcase);
	printf("%s", str);
	return (0);
}*/
//itera () sobre cada carácter de la cadena de entrada
//pasando el índice actual y un puntero al carácter a la función proporcionada
//Si la cadena y los punteros de función no son NULL, comienza la iteración
//Dentro del bucle, la función se aplica a cada carácter
//permitiendo que la función realice alguna operación en el carácter
//El índice se incrementa con cada iteración 
//y el puntero al carácter se incrementa para pasar al siguiente carácter
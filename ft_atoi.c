/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oovsiann <oovsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 20:02:11 by oovsiann          #+#    #+#             */
/*   Updated: 2024/06/12 21:18:30 by oovsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	ft_isspace(int c)
{
	if (c == 9 || c == 10 || c == 11 || c == 12 || c == 13 || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	res;
	int	sign;
	int	i;

	res = 0;
	sign = 1;
	i = 0;
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '+' && nptr[i + 1] != '-')
		i++;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (nptr[i] && nptr[i] >= 48 && nptr[i] <= 57)
	{
		res *= 10;
		res += nptr[i] - 48;
		i++;
	}
	res *= sign;
	return (res);
}

/*int	main(void)
{
	char	*str;
	int		num;

	num = 0;
	str = " -946.23ndy";
	num = ft_atoi(str);
	printf("%d\n", num);
	return (0);
}*/

//convierte una cadena en un número entero
//todos los caracteres de isspace se ignoran
//si no hay numeros despues del espacio, devuelve 0
//si hay '+' o '-', se tienen en cuenta
//todos los digitos se interpretan como un valor numerico
//todos los caracteres despues del primer valor no numerico se ignoran
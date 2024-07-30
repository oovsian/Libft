/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oovsiann <oovsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 20:59:57 by oovsiann          #+#    #+#             */
/*   Updated: 2024/06/20 20:16:19 by oovsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static int	ft_num_size(int num)
{
	int	size;

	size = 0;
	if (num < 1)
		size++;
	while (num != '\0')
	{
		num = num / 10;
		size++;
	}
	return (size);
}

static char	*ft_str(int num)
{
	char	*str;

	str = (char *)ft_calloc((num + 1), sizeof(char));
	if (str == NULL)
		return (NULL);
	return (str);
}

static char	*ft_itoa_(int n)
{
	char	*str;
	int		size;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	size = ft_num_size(n);
	str = ft_str(size);
	if (str == NULL)
		return (NULL);
	if (n < 0)
		n *= -1;
	while (size-- > 0)
	{
		str[size] = n % 10 + '0';
		n = n / 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*result;

	result = ft_itoa_(n);
	if (result == NULL)
		return (result);
	if (n < 0)
	{
		result[0] = '-';
	}
	return (result);
}

/*int    main(void)
{
    int        i;
    char    *a;

    i = -42;
    a = ft_itoa(i);
    printf("%s$\n", a);
    free(a);
    return (0);
}*/
//convierte los dígitos en una serie de caracteres que termina con NULL
//y almacena el resultado en serie
//con num_len cuento cuantos digitos tiene mi numero (es una lentitud)
//con malloc reservo la memoria para cada uno incluso para signo y NULL
//desde '\0' hasta el principio convierto a ASCII y coloco a una cadena
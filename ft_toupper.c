/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oovsiann <oovsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 21:12:23 by oovsiann          #+#    #+#             */
/*   Updated: 2024/05/22 21:21:52 by oovsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

//en ASCII 97 => a, 122 => z

/*int	main(void)
{
	int	c;
	int	i;

	c = 122;
	i = ft_toupper(c);
	printf("%c\n", i);
	return (0);
}*/
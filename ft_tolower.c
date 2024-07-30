/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oovsiann <oovsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 21:23:18 by oovsiann          #+#    #+#             */
/*   Updated: 2024/05/22 21:30:45 by oovsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

//en ASCII 65 => A, 90 => Z

/*int	main(void)
{
	int	c;
	int	i;

	c = 90;
	i = ft_tolower(c);
	printf("%c\n", i);
	return (0);
}*/
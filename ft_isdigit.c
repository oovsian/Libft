/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oovsiann <oovsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:58:06 by oovsiann          #+#    #+#             */
/*   Updated: 2024/05/22 19:35:10 by oovsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
//en ASCII entre 48 ('0') y 57 ('9')

/*int	main(void)
{
	int	c;
	int	i;

	c = '9';
	i = ft_isdigit(c);
	printf("%d\n", i);
	return (0);
}*/
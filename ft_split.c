/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oovsiann <oovsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 20:42:33 by oovsiann          #+#    #+#             */
/*   Updated: 2024/06/12 21:34:23 by oovsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "libft.h"

static int	count_words(char const *str, char c)
{
	int	count;

	count = 0;
	while (*str)
	{
		if (*str != c)
		{
			count++;
			while (*str != '\0' && *str != c)
			{
				str++;
			}
		}
		else
		{
			str++;
		}
	}
	return (count);
}

static int	check_matrix(char **matrix, int j)
{
	if (!matrix[j])
	{
		while (j >= 0)
			free(matrix[j--]);
		free(matrix);
		return (0);
	}
	return (1);
}

static char	**str_to_matrix(char **matrix, char const *s, char c, int start)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = ft_strlen(s);
	while (i <= len)
	{
		if (s[i] != c && start == -1)
			start = i;
		else if ((s[i] == c || i == len) && start != -1)
		{
			matrix[j] = ft_substr(s, start, (i - start));
			if (!check_matrix(matrix, j))
				return (NULL);
			j++;
			start = -1;
		}
		i++;
	}
	matrix[j] = 0;
	return (matrix);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	int		start;

	start = -1;
	matrix = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!matrix)
		return (0);
	return (str_to_matrix(matrix, s, c, start));
}

/*int main(void)
{
    char    *str;
    char    sep;
    char    **i;
    int     cont;
    
    str = "tik,tok,tic,toc";
    sep = ',';
    printf("Cadena origen:%s\n", str);
    i = ft_split(str, sep);
    if (i)
    {
        int cont = 0;
        while (i[cont])
        {
        printf("Matrix %d: %s\n", cont + 1, i[cont]);
        cont++;
        }
        free(i);
    }
    else
    {
        printf("Error: Memory allocation failed:%s\n", cont + 1, i[cont]);
    }
    
    return (0);
}*/

//divide una cadena en una matriz de subcadenas segun un caracter delimitador
//devuelve una matriz de cadenas que representa las subcadenas divididas
//El último elemento de la matriz se establece en NULL
//NULL si falla la asignación de memoria o si 's' es NULL
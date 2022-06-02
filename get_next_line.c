/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amane <amane@studente.42lisboa.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 14:22:41 by amane             #+#    #+#             */
/*   Updated: 2022/05/25 09:03:09 by amane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char 	*str_resto;

static	int		r_read = 1;

size_t	ft_strlen(const char *s)
{
	size_t		i;

	i = 0;
	while (s[i] != 0)
	{
		i ++;
	}
	return (i);
}

int		ler_buffer(int fd, char *str)
{
	int		r_read;

	r_read = read(fd, str, BUFFER_SIZE);
	return (r_read);
}

char	*ft_strrchr(const char *s, int c)
{
	int		tam;
	char	*said;

	said = (char *) s;
	tam = ft_strlen(said);
	while (tam >= 0)
	{
		if (said[tam] == c)
			return (&said[tam]);
		tam --;
	}
	return (0);
}


char	*validar_str(int fd)
{
	char	*temp;
	char	*str;

	while (r_read)
	{
		temp = (char *) ft_calloc(BUFFER_SIZE, sizeof(char));
		r_read = ler_buffer(fd, temp);
		str = ft_concat(str_resto, str);
		str = ft_concat(str, temp);
		str_resto = ft_strrchr(temp, '\n');
		if (str_resto)
			break ;
	}
	return (str);
}

char	*get_next_line(int fd)
{
	char	*str;

	str = validar_str(fd);
	return (str);
}

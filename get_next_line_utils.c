/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amane <amane@studente.42lisboa.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 10:17:27 by amane             #+#    #+#             */
/*   Updated: 2022/05/25 09:02:45 by amane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*apt_str;
	unsigned int	size;

	size = len;
	apt_str = (char *) b;
	while (size--)
		*apt_str++ = c;
	return (b);
}


void	*ft_calloc(size_t count, size_t size)
{
	void	*alocacao;

	alocacao = (void *) malloc(size * count);
	if (!alocacao)
		return (0);
	ft_memset(alocacao, 0, (size * count));
	return (alocacao);
}

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		n;

	n = 0;
	while (s1[n])
		n++;
	ptr = malloc(sizeof(char) * (n + 1));
	if (!ptr)
		return (0);
	n = 0;
	while (s1[n])
	{
		ptr[n] = s1[n];
		n++;
	}
	ptr[n] = '\0';
	return (ptr);
}

char	*ft_strchr(const char *s, int c)
{
	char	*chr;

	chr = (char *) s;
	if (chr == 0)
		return (0);
	while ((char) c != *chr)
	{
		if (*chr == 0)
			return (0);
		++ chr;
	}
	return (chr);
}


char	*ft_concat(char *s1, char *s2)
{
	char	*str;
	int		i;
	int		p_s;

	
	if (s1 == 0 && !s2)
		return (0);
	if (s1 == 0)
		return (s2);
	if (s2 == 0)
		return (s1);
	i = 0;
	p_s = 0;
	str = (char *) ft_calloc(ft_strlen(s1) + ft_strlen(s2), sizeof(char));
	while (s1[p_s])
		str[i ++] = s1[p_s ++];
	p_s = 0;
	while (s2[p_s])
		str[i ++] = s2[p_s ++];
	return (str);
}

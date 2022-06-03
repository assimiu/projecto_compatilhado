/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amane <amane@studente.42lisboa.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 14:22:41 by amane             #+#    #+#             */
/*   Updated: 2022/06/03 10:41:06 by amane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "get_next_line.h"

char	*read_charcts(char *content, int fd)
{
	int		result_read;
	char	*str;

	while (1)
	{
		str = (char *) malloc (sizeof(char) * (BUFFER_SIZE + 1));
		if (!str)
			return (NULL);
		result_read = read(fd, str, BUFFER_SIZE);
		content = ft_strjoin(content, str);
		if (result_read == 0)
			return (content);
		if (ft_strchr(content, '\n'))
			return (content);
	}
}

char	*split_content_newline(char *content)
{
	int		position;
	int		index;
	char	*str;

	if (!content)
		return (NULL);
	position = 0;
	index = 0;
	while (content[position])
	{
		if (content[position] == '\n')
			break ;
		position ++;
	}
	position ++;
	str = (char *) malloc(sizeof(char) * (position + 1));
	while (index < position)
	{
		str[index] = content[index];
		index ++;
	}
	str[index] = 0;
	return (str);
}

char	*atualizar_conteudo(char *conteudo)
{
	size_t		position;

	position = 0;
	while (conteudo[position] && conteudo[position] != '\n')
		position ++;
	return (&conteudo[position + 1]);
}

char	*get_next_line(int fd)
{
	static char	*content;
	char		*str;
	size_t		size_str;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	content = read_charcts(content, fd);
	str = split_content_newline(content);
	content = atualizar_conteudo(content);
	size_str = ft_strlen(str);
	if(size_str == 0)
		return (NULL);
	return (str);
}

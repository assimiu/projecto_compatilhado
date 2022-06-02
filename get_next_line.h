/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amane <amane@studente.42lisboa.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 09:40:45 by amane             #+#    #+#             */
/*   Updated: 2022/05/25 08:07:28 by amane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE
# define GET_NEXT_LINE
# define BUFFER_SIZE 1

# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

size_t	ft_strlen(const char *s);
char	*get_next_line(int fd);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s1);
char	*ft_strchr(const char *s, int c);
char	*ft_concat(char *s1, char *s2);

#endif
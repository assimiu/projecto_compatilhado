/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amane <amane@studente.42lisboa.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 09:56:07 by amane             #+#    #+#             */
/*   Updated: 2022/05/25 09:03:53 by amane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	/*
	char o[12] = "ola mundo";
	char u[10] = " batata";

	printf("%s\n", ft_concat(o, u));*/
	int		o;

	printf("\n+++Compilacao+++\n");
	o = open("txt.txt", O_RDONLY);
	printf("%s", get_next_line(o));
	printf("%s", get_next_line(o));
	printf("%s", get_next_line(o));
	printf("%s", get_next_line(o));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfeltz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 20:41:20 by brfeltz           #+#    #+#             */
/*   Updated: 2018/11/08 23:04:43 by brfeltz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft.h"

int		ft_cat(char *file)
{
	char	filler[SIZE + 1];
	int		i;
	int		f;

	if ((f = open(file, O_RDONLY)) == -1)
		return (errno);
	while ((i = read(f, filler, SIZE)) != 0)
	{
		filler[i] = '\0';
		ft_putstr(filler);
	}
	close(f);
	return (0);
}

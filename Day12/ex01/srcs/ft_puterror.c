/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puterror.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfeltz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 20:49:14 by brfeltz           #+#    #+#             */
/*   Updated: 2018/11/08 23:02:26 by brfeltz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft.h"

void	ft_puterror(char *file, int nbr)
{
	if (nbr != 0)
	{
		ft_putstr("cat: ");
		ft_putstr(file);
		ft_putstr(": ");
		if (nbr == ENOENT)
			ft_putstr("No such file or directory\n");
	}
}

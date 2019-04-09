/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfeltz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 15:01:49 by brfeltz           #+#    #+#             */
/*   Updated: 2018/11/06 15:12:14 by brfeltz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_any(char **tab, int (*f)(char*));

int starts_with_z(char* str)
{
	return str[0] == 'z';
}

int main(int argc, char **argv)
{
	printf("%d", ft_any(argv + 1, starts_with_z));
	if (argc < 2)
		return 1;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfeltz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 21:40:57 by brfeltz           #+#    #+#             */
/*   Updated: 2018/10/30 23:35:10 by brfeltz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char *ft_strcapitalize(char *str);

int		main(int argc, char **argv)
{	
	if (argc == 2)
	{
		printf("%s", ft_strcapitalize(argv[1]));
	}
	else
	{
		putchar('\n');
	}
	return(0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfeltz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 14:44:36 by brfeltz           #+#    #+#             */
/*   Updated: 2018/10/30 19:53:19 by brfeltz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	ft_strncmp(char *s1, char *s2, unsigned int n);

int 	main(int argc, char **argv)
{
	if (argc == 3)
	{	
		printf("Our strncmp returns: %d\n", ft_strncmp(argv[1], argv[2], 7));
		printf("Their strncmp returns: %d\n", strncmp(argv[1], argv[2], 7));
	}
	else
		printf("bad params!\n");
	return(0);
}

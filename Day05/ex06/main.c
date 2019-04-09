/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfeltz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 10:06:59 by brfeltz           #+#    #+#             */
/*   Updated: 2018/10/30 14:40:41 by brfeltz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int 	ft_strcmp(char *s1, char *s2);

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("Our strcmp returns: %d\n", ft_strcmp(argv[1], argv[2]));
		printf("The real strcmp returns: %d\n", strcmp(argv[1], argv[2]));
	}
	else
		printf("bad parameters!\n");
	return(0);
}
	

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfeltz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 18:53:00 by brfeltz           #+#    #+#             */
/*   Updated: 2018/10/30 14:31:26 by brfeltz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char	*ft_strstr(char *str, char *to_find);

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("Our strstr: %s\n", ft_strstr(argv[1], argv[2]));
		printf("their strstr: %s\n", strstr(argv[1], argv[2]));
	}
	else
		printf("error!\n");
	return(0);
}


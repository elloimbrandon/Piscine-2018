/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfeltz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 14:20:38 by brfeltz           #+#    #+#             */
/*   Updated: 2018/10/31 11:59:33 by brfeltz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <std
char	*ft_strncpy(char *dest, char *src, unsigned int n);

int 	main()
{
	char destination[50];
	ft_strncpy(destination, "testtesttest\n", 12);

	printf ("%s", destination);
	printf("\n");
}

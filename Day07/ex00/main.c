/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfeltz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 14:20:38 by brfeltz           #+#    #+#             */
/*   Updated: 2018/11/01 11:48:47 by brfeltz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdio.h>

char	*ft_strdup(char *src);

int 	main()
{	
	char source[]= "Brandon";
	ft_strdup(source);
	printf ("brandon is now here %s\n", source);
}

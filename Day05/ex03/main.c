/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfeltz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 14:07:05 by brfeltz           #+#    #+#             */
/*   Updated: 2018/10/29 16:32:02 by brfeltz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int		main()
{
	char destination[7];
	char *source;

	source = "brandon";
	printf("my name is %s\n", ft_strcpy(destination,source));
	return(0);
}

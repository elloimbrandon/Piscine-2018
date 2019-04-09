/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfeltz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 16:27:37 by brfeltz           #+#    #+#             */
/*   Updated: 2018/10/30 23:40:42 by brfeltz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char *ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{	
		if ((str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
			i++;
		}
			
		if (str[i] == ' ' || str[i] == '-' || str[i] == ',' || str[i] == '\t')
		{
	
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
				i++;
			}
			i++;
		}
		else
		{
			return(str);
		}
		i++;
	}
	return(str);
}


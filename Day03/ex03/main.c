/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfeltz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 17:48:48 by brfeltz           #+#    #+#             */
/*   Updated: 2018/10/27 11:41:39 by brfeltz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int number1;
	int number2;
	int *divide;
	int	*modu;

	number1 = 56;
	number2 = 5;

	printf("56 divided by 5 is %d\n", ft_div_mod(number1, number2, (void*)&divide, (void*)&modu));
	printf("the mod of 56 and 5 is %d\n", ft_div_mod(number1, number2, (void*)&modu, (void*)&divide));
	return(0);
}



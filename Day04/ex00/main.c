/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfeltz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 10:47:17 by brfeltz           #+#    #+#             */
/*   Updated: 2018/10/28 10:19:02 by brfeltz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int 	ft_iterative_factorial(int nb);

int		main(void)
{
	int tester;

	tester = 0; 
	printf("the factorial of %d is %d\n", tester, ft_iterative_factorial(tester));
	return (0);
}

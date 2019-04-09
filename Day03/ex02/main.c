/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfeltz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 15:29:44 by brfeltz           #+#    #+#             */
/*   Updated: 2018/10/25 16:43:18 by brfeltz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int		main(void)
{
	int test1;
	int test2;

	test1 = 4;
	test2 = 5;
	ft_swap(&test1, &test2);
	printf("test1 is %d and test2 is %d\n", test1, test2);
	return (0);
}

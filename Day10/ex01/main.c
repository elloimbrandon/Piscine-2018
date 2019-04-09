/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfeltz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 15:19:06 by brfeltz           #+#    #+#             */
/*   Updated: 2018/11/05 20:26:58 by brfeltz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_foreach(int *tab, int length, void(*f)(int));

void putnbr(int n)
{
	printf("%d,", n);
}

int main()
{
	int test1[] = {1,2,3,4,5};
	int test2[] = {-25,0,20,45};
	int test3[] = {5};

	ft_foreach(test1, 5, putnbr);
	printf("\n");
	ft_foreach(test2, 3, putnbr);
	printf("\n");
	ft_foreach(test3, 0, putnbr);
	printf("\n");
}

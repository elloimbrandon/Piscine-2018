/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfeltz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 23:13:48 by brfeltz           #+#    #+#             */
/*   Updated: 2018/11/06 23:14:13 by brfeltz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

t_list *ft_create_elem(void *data);

int main()
{
	t_list* item = ft_create_elem("asdf");
	printf("%s\n", (char*)item->data);
	printf("%p\n", item->next);
}

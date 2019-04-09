/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linklistedtest.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfeltz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 11:14:56 by brfeltz           #+#    #+#             */
/*   Updated: 2018/11/07 11:15:15 by brfeltz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct      s_list
{
   struct stat      buf;
   char             *name;
   struct s_list    *next;
}                    node;
node    *empty_list(node *info)
{
   info = (node *)malloc(sizeof(node));
   info->name = NULL;
   info->next = NULL;

   return (info);
} //creating an empty list. allocate memory and set all the info (from the struct) to null. don't worry about struct stat, that's specific to ft_ls

void    append_node(node *info, char *name, struct stat buf)
{
   node *temp;
   temp = (node *)malloc(sizeof(node));
   temp->name = name;
   temp->buf = buf;
   temp->next = NULL;

   while (info->next != NULL)
       info = info->next;
   info->next = temp;
} //adding node to the end of a struct, you can look up simpler versions of these. pretty much type sth like "how to add a node at the end of a linked list"

void    copy_node(node *src, node *dest)
{
   node *temp;
   temp = dest;
   temp->name = src->name;
   temp->buf = src->buf;
} "how to copy a node"

void    swap_node(node *src, node *dest)
{
   node *temp;
   temp = (node *)malloc(sizeof(node));
   copy_node(src, temp);
   copy_node(dest, src);
   copy_node(temp, dest);
} //how to swap a node.

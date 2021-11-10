/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 19:06:03 by llethuil          #+#    #+#             */
/*   Updated: 2021/11/10 19:08:18 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*start_node;
	int	i;

	if (!lst)
		return ;
	start_node = *lst;
	i = 0;
	while (start_node->next)
	{
		(*del)(ft_lstlast(*lst));
		free (*lst);
	}
	start_node->next = NULL;
}

// === BEGINNING OF MY TEST ===

#include <stdio.h>

int main()
{
	t_list	*list;
	t_list	**ptr_list;
	int		i;
	int		*ptr_i;

	i = 0;
	ptr_i = &i;
	list = ft_lstnew(ptr_i);
	ptr_list = &list;
	while (i < 10)
	{
		ft_lstadd_back(ptr_list, ft_lstnew(ptr_i));
		printf("content : %d\n", *(int *)list->content);
		i++;
		list = list->next;
	}
}
// === END OF MY TEST ===

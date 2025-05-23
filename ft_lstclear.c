/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 21:12:50 by kchiang           #+#    #+#             */
/*   Updated: 2025/05/23 21:32:58 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* free the content of the nodes in lst */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*junk;

	while (*lst)
	{
		del((*lst)->content);
		junk = *lst;
		*lst = (*lst)->next;
		free(junk);
	}
	return ;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 19:54:23 by kchiang           #+#    #+#             */
/*   Updated: 2025/05/23 23:17:19 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* free the content from node in lst using function del  */
/* extract node from lst then start lst at the next node */
/* free the extracted node */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*junk;

	if (lst && del)
	{
		del(lst->content);
		junk = lst;
		lst = lst->next;
		free(junk);
	}
	return ;
}

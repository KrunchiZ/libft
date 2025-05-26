/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:06:00 by kchiang           #+#    #+#             */
/*   Updated: 2025/05/26 14:58:07 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// write string s to the file descriptor fd
void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
	return ;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:03:07 by kchiang           #+#    #+#             */
/*   Updated: 2025/05/23 13:29:33 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// write char c to the file descriptor fd
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
	return ;
}

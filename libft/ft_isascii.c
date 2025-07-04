/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 11:50:20 by kchiang           #+#    #+#             */
/*   Updated: 2025/05/26 10:29:32 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// return 1 if c is a 7-bit ascii character
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 10:04:15 by kchiang           #+#    #+#             */
/*   Updated: 2025/05/21 17:28:46 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// convert uppercase to lowercase
int	ft_tolower(int c)
{
	unsigned char	ch;

	ch = (unsigned char)c;
	if (ch >= 'A' && ch <= 'Z')
		ch += 32;
	return ((int)ch);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 16:13:34 by kchiang           #+#    #+#             */
/*   Updated: 2025/05/22 16:39:06 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*host;
	unsigned int	i;

	if (!*s)
		return (NULL);
	host = ft_strdup(s);
	if (host == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		host[i] = f(i, s[i]);
		i++;
	}
	return (host);
}

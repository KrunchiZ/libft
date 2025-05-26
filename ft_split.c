/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 09:19:41 by kchiang           #+#    #+#             */
/*   Updated: 2025/05/26 15:50:19 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_strlen but with a separator c check as well */
static int	ft_wordlen(const char *s, const char c)
{
	int	len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/* move across s and allocata memory for every word */
static int	ft_fillhost(char **host, const char *s, char c, int word)
{
	int	i;
	int	depth;
	int	wordlen;

	i = 0;
	depth = 0;
	while (depth < word)
	{
		if (s[i] != c && (i == 0 || (i > 0 && s[i - 1] == c)))
		{
			wordlen = ft_wordlen(&s[i], c);
			host[depth] = ft_calloc(wordlen + 1, 1);
			if (host == NULL)
			{
				while (depth >= 0)
					free(host[depth--]);
				free(host);
				return (0);
			}
			ft_strlcpy(host[depth], &s[i], wordlen + 1);
			depth++;
		}
		i++;
	}
	return (1);
}

/* split s into individual word in an array and return it */
char	**ft_split(const char *s, char c)
{
	int		i;
	int		word;
	char	**host;

	if (!s)
		return (NULL);
	if (!*s)
		return (ft_calloc(1, sizeof(char *)));
	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			word++;
		i++;
	}
	host = malloc((word + 1) * sizeof(char *));
	if (!host)
		return (NULL);
	host[word] = NULL;
	if (ft_fillhost(host, s, c, word))
		return (host);
	return (NULL);
}

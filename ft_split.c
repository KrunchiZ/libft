/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 09:19:41 by kchiang           #+#    #+#             */
/*   Updated: 2025/05/22 12:03:33 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordcount(char *s, char c, int word)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			word++;
		i++;
	}
	return (word);
}

int	ft_wordlen(const char *s, const char c)
{
	int	len;

	len = 0;
	while (*s != c || *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

void	ft_freehost(char **host, int depth)
{
	while (depth >= 0)
		free(host[depth--]);
	free(host);
	return ;
}

int	ft_fillhost(char **host, const char *s, char c, int word)
{
	int	i;
	int	depth;
	int	wordlen;

	i = 0;
	depth = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || (i > 0 && s[i - 1] == c)))
		{
			wordlen = ft_wordlen(&s[i], c);
			host[depth] = ft_calloc(wordlen + 1, 1);
			if (host == NULL)
			{
				ft_freehost(host, depth);
				return (0);
			}
			ft_strlcpy(host[depth], &s[i], wordlen + 1);
			depth++;
		}
		i++;
	}
	return (1);
}

char	**ft_split(const char *s, char c)
{
	size_t	word;
	char	**host;

	if (s == NULL || *s == '\0')
		return (NULL);
	while (*s == c)
		s++;
	word = ft_word_count(s, c, 0);
	host = ft_calloc(word + 1, sizeof(char *));
	if (!host)
		return (NULL);
	if (ft_fillhost(host, s, c, word))
		return (host);
	return (NULL);
}

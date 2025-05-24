/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 09:19:41 by kchiang           #+#    #+#             */
/*   Updated: 2025/05/24 13:23:42 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* count word number in s using c as separator */
int	ft_wordcount(const char *s, char c, int word)
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

/* ft_strlen but with a separator c check as well */
int	ft_wordlen(const char *s, const char c)
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

/* free the host array from depth towards the front */
void	ft_freehost(char **host, int depth)
{
	while (depth >= 0)
		free(host[depth--]);
	free(host);
	return ;
}

/* move across s and allocata memory for every word */
int	ft_fillhost(char **host, const char *s, char c, int word)
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

/* split s into individual word in an array and return it */
char	**ft_split(const char *s, char c)
{
	int		word;
	char	**host;

	if (!s)
		return (NULL);
	if (!*s)
		return (ft_calloc(1, sizeof(char *)));
	word = ft_wordcount(s, c, 0);
	host = ft_calloc(word + 1, sizeof(char *));
	if (!host)
		return (NULL);
	if (ft_fillhost(host, s, c, word))
		return (host);
	return (NULL);
}

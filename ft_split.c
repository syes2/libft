/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungbae <seungbae@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:26:08 by seungbae          #+#    #+#             */
/*   Updated: 2022/07/29 15:48:53 by seungbae         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_word(char const *str, char c)
{
	int	cnt;
	int	i;

	cnt = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			cnt++;
			while (str[i + 1] && str[i] != c)
				i++;
		}
		i++;
	}
	return (cnt);
}

int	wordlen(char const *s, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		len++;
	}
	return (len);
}

char	*ft_strncpy(char const *s, size_t len)
{
	size_t	i;
	char	*res;

	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (0);
	i = 0;
	while (i < len)
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	**all_free(char **result, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	len;
	size_t	word;
	char	**result;

	i = 0;
	word = count_word(s, c);
	result = (char **)malloc(sizeof(char *) * (word + 1));
	if (!result || !s)
		return (NULL);
	while (i < word)
	{
		while (*s && *s == c)
			s++;
		len = wordlen(s, c);
		result[i] = ft_strncpy(s, len);
		if (!result[i])
			return (all_free(result, i));
		s += len;
		i++;
	}
	result[word] = 0;
	return (result);
}

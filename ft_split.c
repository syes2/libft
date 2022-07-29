/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungbae <seungbae@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:26:08 by seungbae          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/07/29 15:48:53 by seungbae         ###   ########seoul.kr  */
=======
/*   Updated: 2022/07/22 17:43:34 by seungbae         ###   ########seoul.kr  */
>>>>>>> 34224a0ba03c9b0a465d1a343629262dfc7e3e80
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
=======
int	is_charset(char c, char c1)
{
	if (c == c1 || c == '\0')
		return (1);
	return (0);
}

>>>>>>> 34224a0ba03c9b0a465d1a343629262dfc7e3e80
int	count_word(char const *str, char c)
{
	int	cnt;
	int	i;

	cnt = 0;
	i = 0;
	while (str[i])
	{
<<<<<<< HEAD
		if (str[i] != c)
		{
			cnt++;
			while (str[i + 1] && str[i] != c)
				i++;
		}
=======
		if (is_charset(str[i + 1], c) == 1
			&& is_charset(str[i], c) == 0)
			cnt++;
>>>>>>> 34224a0ba03c9b0a465d1a343629262dfc7e3e80
		i++;
	}
	return (cnt);
}

<<<<<<< HEAD
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
=======
void	ft_strncpy(char *dest, char const *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void    all_free(char **result, size_t word)
{
        size_t  i;

        i = 0;
        while (i < word)
        {
                free(result[i]);
                i++;
        }
        free(result);
>>>>>>> 34224a0ba03c9b0a465d1a343629262dfc7e3e80
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
<<<<<<< HEAD
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
=======
	size_t	j;
	size_t	k;
	char	**result;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!result)
		return (NULL);
	while (s[i])
	{
		if (!is_charset(s[i], c))
		{
			j = i;
			while (s[i] && !is_charset(s[i], c))
				i++;
			result[k] = (char *)malloc(i - j + 1);
			if (result[k] == 0)
                all_free(result, k);
			ft_strncpy(result[k], &s[j], i - j);
			k++;
		}
		i++;
	}
	result[i] = 0;
	return (result);
}
>>>>>>> 34224a0ba03c9b0a465d1a343629262dfc7e3e80

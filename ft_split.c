/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungbae <seungbae@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:26:08 by seungbae          #+#    #+#             */
/*   Updated: 2022/07/22 17:43:34 by seungbae         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_charset(char c, char c1)
{
	if (c == c1 || c == '\0')
		return (1);
	return (0);
}

int	count_word(char const *str, char c)
{
	int	cnt;
	int	i;

	cnt = 0;
	i = 0;
	while (str[i])
	{
		if (is_charset(str[i + 1], c) == 1
			&& is_charset(str[i], c) == 0)
			cnt++;
		i++;
	}
	return (cnt);
}

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
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungbae <seungbae@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:16:22 by seungbae          #+#    #+#             */
/*   Updated: 2022/07/29 17:07:15 by seungbae         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_charset(char c, char const *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		charset++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s1) - 1;
	if (s1 == 0 || set == 0)
		return (0);
	while (s1[i] && is_charset(s1[i], set))
		i++;
	while (s1[j] && is_charset(s1[j], set) && i < j)
		j--;
	str = ft_substr(s1, i, j - i + 1);
	return (str);
}

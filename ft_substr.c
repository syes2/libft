/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungbae <seungbae@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:25:22 by seungbae          #+#    #+#             */
/*   Updated: 2022/07/20 18:15:53 by seungbae         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;

	if (!s)
		return (0);
	res = (char *)malloc(sizeof(char) * len + 1);
	if (!res)
		return (0);
	i = 0;
	while (i < len)
		res[i++] = s[start++];
	res[i] = '\0';
	return (res);
}

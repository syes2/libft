/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungbae <seungbae@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:25:22 by seungbae          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/07/29 14:20:53 by seungbae         ###   ########seoul.kr  */
=======
/*   Updated: 2022/07/22 17:20:12 by seungbae         ###   ########seoul.kr  */
>>>>>>> 34224a0ba03c9b0a465d1a343629262dfc7e3e80
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;

	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		len = 0;
	if (ft_strlen(s) <= len)
<<<<<<< HEAD
		len = ft_strlen(s) - start;
=======
        len = ft_strlen(s) - start;
>>>>>>> 34224a0ba03c9b0a465d1a343629262dfc7e3e80
	res = (char *)malloc(sizeof(char) * len + 1);
	if (!res)
		return (0);
	i = 0;
	while (i < len && s[start + i])
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

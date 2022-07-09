/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungbae <seungbae@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 15:58:35 by seungbae          #+#    #+#             */
/*   Updated: 2022/07/09 16:11:11 by seungbae         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!(*needle))
		return ((char *)haystack);
	while (i < len)
    {
        if (haystack[i] == needle[0])
		{
            j = 1;
            while (needle[j] && i + j < len)
            {
                if (haystack[i + j] != needle[j])
                    break;
                j++;
            }
            if (0 == needle[j])
                return ((char *)&haystack[i]);
		}
        i++;
	}
}
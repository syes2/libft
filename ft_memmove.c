/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungbae <seungbae@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 19:57:55 by seungbae          #+#    #+#             */
/*   Updated: 2022/07/19 17:09:20 by seungbae         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;
	unsigned int	i;

	if (!dst && !src)
		return (dst);
	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;
	i = -1;
	if (dst < src)
	{
		while (++i < n)
			tmp_dst[i] = tmp_src[i];
	}
	else
	{
		while (++i < n)
			tmp_dst[n - 1 - i] = tmp_src[n - 1 - i];
	}
	return (dst);
}

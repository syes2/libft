/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungbae <seungbae@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 16:14:46 by seungbae          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/07/29 15:14:05 by seungbae         ###   ########seoul.kr  */
=======
/*   Updated: 2022/07/22 15:59:41 by seungbae         ###   ########seoul.kr  */
>>>>>>> 34224a0ba03c9b0a465d1a343629262dfc7e3e80
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
<<<<<<< HEAD
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
=======
		if (str[i] == (unsigned char)c)
			return ((char *)&str[i]);
>>>>>>> 34224a0ba03c9b0a465d1a343629262dfc7e3e80
		--i;
	}
	return (0);
}

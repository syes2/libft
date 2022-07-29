/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungbae <seungbae@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 12:58:54 by seungbae          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/07/29 16:10:17 by seungbae         ###   ########seoul.kr  */
=======
/*   Updated: 2022/07/22 15:58:55 by seungbae         ###   ########seoul.kr  */
>>>>>>> 34224a0ba03c9b0a465d1a343629262dfc7e3e80
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	scale(int num)
{
	int	i;

	i = 0;
	if (num <= 0)
		i++;
	while (num)
	{
		i++;
<<<<<<< HEAD
		num /= 10;
=======
		num = num / 10;
>>>>>>> 34224a0ba03c9b0a465d1a343629262dfc7e3e80
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			len;
	long long	nb;

	len = scale(n);
	nb = n;
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		str[0] = '0';
	str[len--] = '\0';
	while (nb)
	{
		str[len] = nb % 10 + '0';
		len--;
		nb /= 10;
	}
	return (str);
}

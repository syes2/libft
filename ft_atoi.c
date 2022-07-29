/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungbae <seungbae@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 16:20:49 by seungbae          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/07/29 17:09:38 by seungbae         ###   ########seoul.kr  */
=======
/*   Updated: 2022/07/22 17:25:31 by seungbae         ###   ########seoul.kr  */
>>>>>>> 34224a0ba03c9b0a465d1a343629262dfc7e3e80
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] > 8 && str[i] < 14))
			i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
				sign *= -1;
		i++;
	}
	result = 0;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:05:03 by llethuil          #+#    #+#             */
/*   Updated: 2021/11/03 09:25:48 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			nbr;
	int			i;
	int			sign;

	nbr = 0;
	i = 0;
	sign = 1;
	while (str[i] <= 32)
		i++;
	if (str[i] == '-')
	{
		sign = sign * -1;
		i ++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] && '0' <= str[i] && str[i] <= '9')
	{
		nbr = nbr * 10;
		nbr = nbr + str[i] - '0';
		i++;
	}
	return (nbr * sign);
}

/*
// === BEGINNING OF MY TEST ===

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char	*number;

	number = "42";
	printf("number as a string : %s\n", number);
	printf("number after atoi : %d\n", atoi(number));
	printf("number after ft_atoi : %d\n", ft_atoi(number));
	return (0);
}

// === END OF MY TEST ===
*/

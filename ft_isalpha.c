/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:20:07 by llethuil          #+#    #+#             */
/*   Updated: 2021/11/02 17:19:55 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (ft_isupper(c) == 1 || ft_islower(c) == 1)
		return (1);
	else
		return (0);
}

/*
// === BEGINNING OF MY TEST === //

#include <stdio.h>
#include <ctype.h>

int	main()
{
	int	test_1;
	int	test_2;

	test_1 = 'b';
	test_2 = '6';
	printf("test_1 with 'b' (result expected 1) :	%d\n", test_1);
	printf("test_2 with '6' (result expected 0) :	%d\n", test_2);
	printf("result_1 isalpha		:	%d\n", isalpha(test_1));
	printf("result_1 ft_isalpha		:	%d\n", ft_isalpha(test_1));
	printf("result_2 isalpha		:	%d\n", isalpha(test_2));
	printf("result_2 ft_isalpha		:	%d\n", ft_isalpha(test_2));
	return (0);
}

// === END OF MY TEST === //
*/

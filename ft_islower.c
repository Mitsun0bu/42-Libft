/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 13:42:37 by llethuil          #+#    #+#             */
/*   Updated: 2021/10/14 17:17:56 by llethuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_islower(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	else
		return (0);
}

/*
// === BEGINNING OF MY TEST === //

#include <stdio.h>
#include <ctype.h>

int	main ()
{
	int	test_1;
	int	test_2;

	test_1 = 'a';
	test_2 = 'B';
	printf("test_1 with 'a' (result expected 1) : 	%d\n", test_1);
	printf("test_2 with 'B' (result expected 0) : 	%d\n", test_2);
	printf("result_1 islower		:	%d\n", islower(test_1));
	printf("result_1 ft_islower		: 	%d\n", ft_islower(test_1));
	printf("result_2 islower		: 	%d\n", islower(test_2));
	printf("result_2 ft_islower		: 	%d\n", ft_islower(test_2));
	return (0);
}

// === END OF MY TEST === //
*/

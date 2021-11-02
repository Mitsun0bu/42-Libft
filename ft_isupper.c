/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 13:37:45 by llethuil          #+#    #+#             */
/*   Updated: 2021/10/14 17:35:36 by llethuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int	ft_isupper(int c)
{
	if ('A' <= c && c <= 'Z')
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

	test_1 = 'B';
	test_2 = ' ';
	printf("test_1 with 'B' (result expected 1) : 	%d\n", test_1);
	printf("test_2 with ' ' (result expected 0) : 	%d\n", test_2);
	printf("result_1 isupper		:	%d\n", isupper(test_1));
	printf("result_1 ft_isupper		: 	%d\n", ft_isupper(test_1));
	printf("result_2 isupper		: 	%d\n", isupper(test_2));
	printf("result_2 ft_isupper		: 	%d\n", ft_isupper(test_2));
	return (0);
}

// === END OF MY TEST === //
*/

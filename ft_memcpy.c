/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 17:08:06 by llethuil          #+#    #+#             */
/*   Updated: 2021/11/03 09:25:51 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

/*
// === BEGINNING OF MY TEST ===

#include <stdio.h>

int main()
{
	char	src_1[] = "Start now";
	char	src_2[] = "Start now";
	size_t	n = sizeof(char) * 2;

	// Native function
	printf("Initial src_1 value : 	%s\n", src_1);
	memcpy(src_1 + 7, src_1, n);
	printf("Final src_1 value : 	%s\n\n", src_1);

	// My function
	printf("Initial src_2 value : 	%s\n", src_2);
	ft_memcpy(src_2 + 7, src_2, n);
	printf("Final src_2 value : 	%s\n", src_2);
    return (0);
}

// === END OF MY TEST ===
*/
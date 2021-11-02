/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 12:00:05 by llethuil          #+#    #+#             */
/*   Updated: 2021/11/02 13:49:34 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (((unsigned char *)src)[i] != c && i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	if (((unsigned char *)src)[i] == c)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		return (dst);
	}
	return (NULL);
}

/*
// === BEGINNING OF MY TEST ===

#include <stdio.h>

int main()
{
	int	src [] = {54, 85, 20, 63, 21};
	int	dst [] = {0, 0, 0, 0, 0};
	int	dst_2 [] = {0, 0, 0, 0, 0};
	int	c = 42;
	size_t	n = sizeof(int) * 5;
	int		len;

	printf("Initial dst values : ");
	for(len = 0; len < 5; len++)
		printf("%d ", dst[len]);
	printf("\n");

	// Copy the memory bloc src to dst
	ft_memccpy(dst, src, c, n);
	printf("Final dst values after ft_memccpy : ");
	for(len = 0; len < 5; len++)
		printf("%d ", dst[len]);
	printf("\n");

	// Copy the memory bloc src to dst_2
	memccpy(dst_2, src, c, n);
	printf("Final dst values after memccpy : ");
	for(len = 0; len < 5; len++)
		printf("%d ", dst_2[len]);
	printf("\n");

    return (0);
}

// === END OF MY TEST ===
*/

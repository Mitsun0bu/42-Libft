/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 17:08:06 by llethuil          #+#    #+#             */
/*   Updated: 2021/10/14 17:39:49 by llethuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i ++;
	}
	((unsigned char *)dst)[i] = '\0';
	return (dst);
}

/*
// === BEGINNING OF MY TEST ===

#include <stdio.h>

int main()
{
	int	src [] = {54, 85, 20, 63, 21};
	int	dst [] = {0, 0, 0, 0, 0};
	size_t	n = sizeof(int) * 5;
	int		len;

	printf("Initial dst values : ");
	for(len = 0; len < 5; len++)
		printf("%d ", dst[len]);
	printf("\n");

	// Copy the memory bloc src to dst
	ft_memcpy(dst, src, n);

	printf("Final dst values after ft_memcpy : ");
	for(len = 0; len < 5; len++)
		printf("%d ", dst[len]);
	printf("\n");
    return (0);
}

// === END OF MY TEST ===
*/

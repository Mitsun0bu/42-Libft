/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:33:30 by llethuil          #+#    #+#             */
/*   Updated: 2021/11/02 14:20:37 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

/*
// === BEGINNING OF MY TEST ===

#include <stdio.h>

int	main()
{
	char	src[50] = "SALUT LES COPAINS";
	char	dst_1[50] = "SALUT LES COPINES";
	char	dst_2[50] = "SALUT LES COPINES 2";
	size_t	dstsize = 5;

	printf("src : %s\n", src);
	printf("dst_1 : %s\n", dst_1);
	printf("dst_2 : %s\n", dst_2);
	//	Native function
	printf("Result of strlcpy : %lu\n", strlcpy(dst_1, src, dstsize));
	printf("dst_1 after strlcpy : %s\n", dst_1);
	//	My function
	printf("Result of ft_strcpy : %lu\n", ft_strlcpy(dst_2, src, dstsize));
	printf("dst_2 after strlcpy : %s\n", dst_2);
	return (0);
}

// === END OF MY TEST ===
*/

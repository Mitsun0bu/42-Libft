/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 10:17:12 by llethuil          #+#    #+#             */
/*   Updated: 2021/10/21 10:27:33 by llethuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (src[i] && i < len)
	{
		dst[i] = src[i];
		i ++;
	}
	while (i < len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}

/*
// === BEGINNING OF MY TEST ===

#include <stdio.h>

int	main()
{
	char	src[50] = "WESH LES COPAINS";
	char	dst_1[50] = "SALUT LES COPINES";
	char	dst_2[50] = "SALUT LES COPINES";
	size_t	len = 10;

	printf("src : %s\n", src);
	printf("dst_1 : %s\n", dst_1);
	printf("dst_2 : %s\n", dst_2);
	//	Native function
	printf("Result of strncpy : 	%s\n", strncpy(dst_1, src, len));
	//	My function
	printf("Result of ft_strncpy : 	%s\n", ft_strncpy(dst_2, src, len));
	return (0);
}

// === END OF MY TEST ===
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:34:31 by llethuil          #+#    #+#             */
/*   Updated: 2021/10/19 14:41:52 by llethuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

/*
// === BEGINNING OF MY TEST ===

#include <stdio.h>

int	main()
{
	char	src[50] = "SALUT LES COPAINS";
	char	dst_1[50] = "SALUT LES COPINES";
	char	dst_2[50] = "SALUT LES COPINES 2";

	printf("src : %s\n", src);
	printf("dst_1 : %s\n", dst_1);
	printf("dst_2 : %s\n", dst_2);
	//	Native function
	printf("Result of strcpy : %s\n", strcpy(dst_1, src));
	//	My function
	printf("Result of ft_strcpy : %s\n", ft_strcpy(dst_2, src));
	return (0);
}

// === END OF MY TEST ===
*/

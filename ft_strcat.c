/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:46:00 by llethuil          #+#    #+#             */
/*   Updated: 2021/11/03 09:25:59 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dst, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dst[i])
		i++;
	j = 0;
	while (src[j])
	{
		dst[i] = src[j];
		j++;
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
	char	src[50] = "BOYS";
	char	dst_1[50] = "HELLO";
	char	dst_2[50] = "HELLO";

	printf("src : %s\n", src);
	printf("dst_1 : %s\n", dst_1);
	printf("dst_2 : %s\n", dst_2);

	//	Native function
	printf("Result of strcat : %s\n", strcat(dst_1, src));
	//	My function
	printf("Result of ft_strcat : %s\n", ft_strcat(dst_2, src));
	return (0);
}

// === END OF MY TEST ===
*/

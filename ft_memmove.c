/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:08:22 by llethuil          #+#    #+#             */
/*   Updated: 2021/10/18 11:41:07 by llethuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i ++;
	}
	return (dst);
}

/*
// === BEGINNING OF MY TEST ===

#include <stdio.h>

int	main()
{
	char	src[] = "HELLO";
	char	dst[] = "00000";
	size_t	len = sizeof(char) * 5;
	int i;

	printf("src : ");
	for(i = 0; i < 5; i++)
		printf("%c ", src[i]);
	printf("\n");
	
	printf("dst : ");
	for(i = 0; i < 5; i++)
		printf("%c ", dst[i]);
	printf("\n");

	//	Native function
	printf("Result of memmove : ");
		printf("%s", memmove(dst, src, len));
	printf("\n");
	//	My function
	printf("Result of ft_memmove : ");
		printf("%s", ft_memmove(dst, src, len));
	printf("\n");
	return (0);
}

// === END OF MY TEST ===
*/

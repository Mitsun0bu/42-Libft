/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:08:22 by llethuil          #+#    #+#             */
/*   Updated: 2021/11/03 09:25:54 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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


// === BEGINNING OF MY TEST ===

#include <stdio.h>

int main()
{
	char	src_1[] = "Salut_je_suis_une_fonction_bizarre";
	char	src_2[] = "Salut_je_suis_une_fonction_bizarre";
	size_t	n = sizeof(char) * 6;

	// Native function
	printf("Initial src_1 value : %s\n", src_1);
	memmove(src_1 + 9, src_1 + 14, n);
	printf("Final src_1 value : %s\n\n", src_1);

	// My function
	printf("Initial src_2 value : %s\n", src_2);
	ft_memmove(src_2 + 9, src_2 + 14, n);
	printf("Final src_2 value : %s\n", src_2);
    return (0);
}

// === END OF MY TEST ===


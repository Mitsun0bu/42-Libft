/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 10:34:16 by llethuil          #+#    #+#             */
/*   Updated: 2021/11/02 14:05:40 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i_haystack;
	size_t	i_needle;
	size_t	i_check;

	i_haystack = 0;
	i_needle = 0;
	if (needle[i_needle] == '\0')
		return ((char *)haystack);
	while (haystack[i_haystack])
	{
		if (haystack[i_haystack] == needle[i_needle])
		{
			i_check = i_haystack;
			while (i_needle < len && haystack[i_check] == needle [i_needle])
			{
				i_check ++;
				i_needle ++;
			}
			if (needle[i_needle] == '\0' && len >= i_check)
				return ((char *)haystack + i_haystack);
		}
		i_haystack ++;
	}
	return (NULL);
}

/*
// === BEGINNING OF MY TEST ===

#include <stdio.h>

int	main()
{
	char	haystack[50] = "WESH LA STREET";
	char	needle[50] = "LA";
	size_t	len = 6;

	printf("haystack: %s\n", haystack);
	printf("needle : %s\n", needle);
	//	Native function
	printf("Result of strnstr : 	%s\n", strnstr(haystack, needle, len));
	//	My function
	printf("Result of ft_strnstr : 	%s\n", ft_strnstr(haystack, needle, len));
	return (0);
}

// === END OF MY TEST ===
*/

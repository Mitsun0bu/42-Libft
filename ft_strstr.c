/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 23:38:47 by llethuil          #+#    #+#             */
/*   Updated: 2021/10/25 23:46:45 by llethuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, char *needle)
{
	int	i;
	int	j;
	int	check;

	i = 0;
	j = 0;
	if (needle[j] == '\0')
		return ((char *)haystack + i);
	while (haystack[i])
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			check = i;
			while (haystack[check] && needle[j] && haystack[check] == needle[j])
			{
				check++;
				j++;
			}
			if (needle[j] == '\0')
				return ((char *)haystack + i);
		}
		i ++;
	}
	return (0);
}

/*
// === BEGINNING OF MY TEST ===

#include <stdio.h>

int	main()
{
	char	haystack[50] = "SALUT LES COPAINS";
	char	needle[50] = "LES";

	//	Native function
	printf("Result of strstr : %s\n", strstr(haystack, needle));
	//	My function
	printf("Result of ft_strstr : %s\n", ft_strstr(haystack, needle));
	return (0);
}

// === END OF MY TEST ===
*/

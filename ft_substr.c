/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:33:55 by llethuil          #+#    #+#             */
/*   Updated: 2021/11/02 17:21:45 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	i;

	substr = malloc(len * sizeof(char));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start];
		start ++;
		i ++;
	}
	return (substr);
}


// === BEGINNING OF MY TEST ===

#include <stdio.h>

int	main()
{
	char const		s[18] = "SALUT LES COPAINS";
	unsigned int	start = 8;
	size_t			len = 3;

	printf("src : %s\n", s);
	//	My function
	printf("Result of ft_substr : %s\n", ft_substr(s, start, len));
	return (0);
}

// === END OF MY TEST ===


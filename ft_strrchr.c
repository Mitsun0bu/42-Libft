/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 18:53:00 by llethuil          #+#    #+#             */
/*   Updated: 2021/11/02 14:06:31 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s) - 1;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i --;
	}
	return (NULL);
}

/*
// === BEGINNING OF MY TEST ===

#include <stdio.h>

int	main()
{
	char	s[50] = "SALUT LES SUPERSTARS";
	int		c = 'S';

	printf("s : %s\n", s);
	//	Native function
	printf("Result of strrchr : %s\n", strrchr(s, c));
	//	My function
	printf("Result of ft_strrchr : %s\n", ft_strrchr(s, c));
	return (0);
}

// === END OF MY TEST ===
*/

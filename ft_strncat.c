/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:23:49 by llethuil          #+#    #+#             */
/*   Updated: 2021/10/20 17:33:39 by llethuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i])
		i++;
	j = 0;
	while (s2[j] && j < n)
	{
		s1[i] = s2[j];
		j++;
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

/*
// === BEGINNING OF MY TEST ===

#include <stdio.h>

int	main()
{
	char	s2[50] = "BOYS";
	char	s1[50] = "HELLO";
	char	my_s1[50] = "HELLO";
	size_t	n = 3;

	printf("s2 : %s\n", s2);
	printf("s1 : %s\n", s1);
	printf("my_s1 : %s\n", my_s1);

	//	Native function
	printf("Result of strncat : %s\n", strncat(s1, s2, n));
	//	My function
	printf("Result of ft_strncat : %s\n", ft_strncat(my_s1, s2, n));
	return (0);
}

// === END OF MY TEST ===
*/

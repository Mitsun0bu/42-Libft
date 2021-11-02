/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 17:48:28 by llethuil          #+#    #+#             */
/*   Updated: 2021/10/29 17:58:58 by llethuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	int	i;

	i = 0;
	if (ft_strlen(s1) != ft_strlen(s2))
		return (0);
	while (s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (0);
	}
	return (1);
}

/*
// === BEGINNING OF MY TEST ===

#include <stdio.h>

int	main()
{
	char const	s1[50] = "SALUT LES COPAINS";
	char const	s2[50] = "SALUT LES COPINES";

	printf("s1 : %s\n", s1);
	printf("s2 : %s\n", s2);
	//	My function
	printf("Result of ft_strequ : %d\n", ft_strequ(s1, s2));
	return (0);
}

// === END OF MY TEST ===
*/

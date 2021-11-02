/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 11:11:41 by llethuil          #+#    #+#             */
/*   Updated: 2021/10/19 12:38:26 by llethuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && s1[i] == s2[i])
		i++;
	if (s1[i] == s2[i])
		return (0);
	else
		return (s1[i] - s2[i]);
}

/*
// === BEGINNING OF MY TEST ===

#include <stdio.h>

int	main()
{
	char	s1[50] = "SALUT LES COPAINS";
	char	s2[50] = "SALUT LES COPINES";

	printf("s1 : %s\n", s1);
	printf("s2 : %s\n", s2);
	//	Native function
	printf("Result of strcmp : %d\n", strcmp(s1, s2));
	//	My function
	printf("Result of ft_strcmp : %d\n", ft_strcmp(s1, s2));
	return (0);
}

// === END OF MY TEST ===
*/

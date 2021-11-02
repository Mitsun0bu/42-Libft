/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 17:36:33 by llethuil          #+#    #+#             */
/*   Updated: 2021/10/29 17:45:55 by llethuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strclr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		s[i] = '\0';
		i ++;
	}
}

/*
// === BEGINNING OF MY TEST ===

#include <stdio.h>

int	main()
{
	char	s[50] = "SALUT CA TEST ?";
	
	printf("s before ft_strclr: %s\n", s);
	//	My function
	ft_strclr(s);
	printf("s after ft_strclr : %s\n", s);
	return (0);
}

// === END OF MY TEST ===
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itobin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 12:37:44 by llethuil          #+#    #+#             */
/*   Updated: 2021/11/02 18:08:53 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_itobin (unsigned int n)
{
    unsigned int	i;

	i = 1 << 31;
	while (i > 0)
	{
        if (n & i)
			write (1, "1", 1);
		else
			write (1, "0", 1);
		i = i / 2;
	}
}

/*
// === BEGINNING OF MY TEST === //

#include <stdio.h>

int main(void)
{
    printf("Conversion of 7 with ft_itobin : ");
	printf("\n");
	ft_itobin(7);
    printf("Conversion of 4 with ft_itobin");
	printf("\n");
	ft_itobin(4);
	return (0);
}

// === END OF MY TEST === //
*/

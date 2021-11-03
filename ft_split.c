/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@stduent.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:24:29 by llethuil          #+#    #+#             */
/*   Updated: 2021/11/03 19:18:29 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h> //DEBUG

char	**ft_split(char const *s, char c);
void	ft_malloc_in_splitted(char **splitted, char const *s, char c);
void	ft_fill_in_splitted(char *splitted, char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**splitted;
	int		len_splitted;
	int		i;

	i = 0;
	len_splitted = 0;
	while (s[i])
	{
		if (s[i] != c && s[i + 1] == c)
			len_splitted ++;
		if (s[i] == c && s[i + 1] == '\0')
			len_splitted --;
		i++;
	}
	splitted = malloc (sizeof(char) * (len_splitted + 2));
	if (!splitted)
		return (NULL);
	ft_malloc_in_splitted(splitted, s, c);
	return (splitted);
}

void	ft_malloc_in_splitted(char **splitted, char const *s, char c)
{
	int	i;
	int	word_i;
	int	word_len;

	i = 0;
	word_i = 0;
	while (s[i])
	{
		if (s[i] == c)
			i ++;
		else if (s[i] != c)
		{
			printf("word_i = %d\n", word_i); // DEBUG

			word_len = 0;
			while (s[i] != c && s[i + 1] != '\0')
			{
				i++;
				word_len ++;
			}
			if (s[i] != c && s[i + 1] == '\0')
				word_len ++;
			printf("word_len = %d\n", word_len); // DEBUG
			splitted[word_i] = malloc (sizeof(char) * (word_len + 1));
			i ++;
			word_i ++;
		}
	}
}

// === BEGINNING OF MY TEST === //

#include <stdio.h>

int main()
{
	char const	s[50] = "__CC_LES_MECS_!!!";
	char		c = '_';

	ft_split(s, c);

	return (0);
}

// === END OF MY TEST === //



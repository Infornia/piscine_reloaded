/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilk <mwilk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 16:33:15 by mwilk             #+#    #+#             */
/*   Updated: 2016/11/08 17:19:45 by mwilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

void	ft_putstr(char *s)
{
	int		i;
	
	i = -1;
	while (s[++i])
		ft_putchar(s[i]);
}

void	swap(char *s1, char *s2)
{
	char	*tmp;
	int		i;
	int		j;
	
	j = 0;
	while (s1[j] == s2[j])
		++j;
	if (s1[j] > s2[j])
	{		
		tmp = s1;
		s1 = s2;
		s2 = tmp;
	}
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	
	i = 1;
	if (argc > 2)
	{
		while (argv[++i])
		{
			j = 1;
			while (argv[++j])
				swap(argv[j - 1], argv[j]);
			swap(argv[i - 1], argv[i]);
		}
		i = 0;
		while (argv[++i])
		{
			ft_putstr(argv[i]);
			ft_putchar('\n');
		}
	}
	return (0);
}
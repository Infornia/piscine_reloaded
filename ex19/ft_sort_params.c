/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilk <mwilk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 16:33:15 by mwilk             #+#    #+#             */
/*   Updated: 2016/11/10 12:50:56 by mwilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *s)
{
	int		i;

	i = -1;
	while (s[++i])
		ft_putchar(s[i]);
}

void	swap(char **s1, char **s2)
{
	char	*tmp;
	int		j;

	j = 0;
	while ((*s1)[j] == (*s2)[j])
		++j;
	if ((*s1)[j] >= (*s2)[j])
	{
		tmp = *s1;
		*s1 = *s2;
		*s2 = tmp;
	}
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 0;
	while (++i < argc)
	{
		j = 0;
		while (++j < (argc - i))
			swap(&argv[j], &argv[j + 1]);
	}
	i = 0;
	while (++i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
	}
	return (0);
}

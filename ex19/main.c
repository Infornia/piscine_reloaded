/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilk <mwilk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 11:37:22 by mwilk             #+#    #+#             */
/*   Updated: 2016/11/08 16:39:18 by mwilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<stdlib.h>
#include	<unistd.h>

int		ft_putstr(char *nb);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// int		main(int argc, char **argv)
// {
// 	printf("%d\n", ft_putstr(argv[1]));
// 	return (0);
// }